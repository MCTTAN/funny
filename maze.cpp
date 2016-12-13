#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

unsigned int square_number(unsigned int total_squares, vector<unsigned int> position_current, vector<unsigned int> rows, vector<unsigned int> columns)
{
    for(unsigned p = 0; p < total_squares; ++p)
    {
        if(position_current.at(0) == rows.at(p) && position_current.at(1) == columns.at(p))
            return p;
    }
    
    return 0;
}

void determine_next(unsigned int right, unsigned int bottom, unsigned int left, unsigned int top, unsigned int & next_x, unsigned int & next_y, unsigned int current_x, unsigned int current_y, unsigned int previous_x, unsigned int previous_y)
{
    if(right == 0 && left == 0) // If there are no right and left walls
    {
        if(bottom == 0) // If there's no bottom wall
            next_x += 1; // Go down
        
        else
        {
            if(next_y + 1 == previous_y)
                next_y -= 1; // Go left
                
            else
                next_y += 1; // Go right
        }
    }
    
    else if(bottom == 0 && top == 0) // If there are no bottom and top walls
    {
        if(next_x + 1 == previous_x)
            next_x -= 1; // Go up

        else
            next_x += 1; // Go down
    }
    
    else if(bottom == 0 && top == 1 && (next_x + 1 != previous_x)) // If there's no bottom wall
        next_x += 1; // Go down

    else if(top == 0 && bottom == 1 && (next_x - 1 != previous_x)) // If there's no top wall
        next_x -= 1; // Go up

    else if(right == 0 && left == 1 && (next_y + 1 != previous_y)) // If there's no right wall
        next_y += 1; // Go right

    else if(left == 0 && right == 1 && (next_y - 1 != previous_y)) // If there's no left wall
        next_y -= 1; // Go left
    
    return;
}

int main()
{
    ifstream inFS;
    vector<unsigned int> rows;
    vector<unsigned int> columns;
    vector<unsigned int> list_right;
    vector<unsigned int> list_bottom;
    vector<unsigned int> list_left;
    vector<unsigned int> list_top;
    vector<unsigned int> position_current(2);
    vector<unsigned int> position_previous(2);
    vector<unsigned int> position_next(2);
    unsigned int total_rows = 0, total_columns = 0;
    unsigned int start_row = 0, start_column = 0;
    unsigned int finish_row = 0, finish_column = 0;
    unsigned int wall_right = 0, wall_bottom = 0, wall_left = 0, wall_top = 0;
    unsigned int total_squares = 0;
    unsigned square_current = 0;
    string filename;
    
    cout << "Welcome to the Maze Solver!" << endl;
    
    cout << "Please enter the filename of the maze: ";
    cin >> filename;
    
    inFS.open(filename.c_str());
    
    if(!inFS.good())
        exit(1);
        
    inFS >> total_rows >> total_columns >> finish_row >> finish_column;
    
    total_squares = total_rows * total_columns;
 
    for(unsigned m = 0; m < total_rows; ++m) // Fill the rows and columns vectors with the coordinates
    {
        for(unsigned n = 0; n < total_columns; ++n)
        {
            rows.push_back(m);
            columns.push_back(n);
        }
    }
    
    while(!inFS.eof())
    {
        inFS >> wall_right >> wall_bottom >> wall_left >> wall_top;
        list_right.push_back(wall_right);
        list_bottom.push_back(wall_bottom);
        list_left.push_back(wall_left);
        list_top.push_back(wall_top);
    }
    
    cout << "Please enter the starting row (a number between 0 and " << total_rows - 1 << " inclusive): ";
    cin >> start_row;
    while(start_row > total_rows - 1)
    {
        cout << "Please enter the starting row (a number between 0 and " << total_rows - 1 << " inclusive): ";
        cin >> start_row;
    }
    
    cout << "Please enter the starting column (a number between 0 and " << total_columns - 1 << " inclusive): ";
    cin >> start_column;
    while(start_column > total_columns - 1)
    {
        cout << "Please enter the starting column (a number between 0 and " << total_columns - 1 << " inclusive): ";
        cin >> start_column;
    }
    
    position_previous.at(0) = position_current.at(0) = position_next.at(0) = start_row;
    position_previous.at(1) = position_current.at(1) = position_next.at(1) = start_column;
    
    square_current = square_number(total_squares, position_current, rows, columns);
    
    if(list_right.at(square_current) == 1 && list_bottom.at(square_current) == 1 && list_left.at(square_current) == 1 && list_top.at(square_current) == 1)
    {
        cout << "No solution" << endl;
        exit(1);
    }
    
    cout << "A solution exists" << endl;
    cout << "(" << position_current.at(0) << ", " << position_current.at(1) << ")" << endl;
    for(unsigned int i = square_current; i < total_squares; ++i)
    {
        square_current = square_number(total_squares, position_current, rows, columns);
        
        determine_next(list_right.at(square_current), list_bottom.at(square_current), list_left.at(square_current), list_top.at(square_current), position_next.at(0), position_next.at(1), position_current.at(0), position_current.at(1), position_previous.at(0), position_previous.at(1));
        cout << "(" << position_next.at(0) << ", " << position_next.at(1) << ")" << endl;
        
        position_previous.at(0) = position_current.at(0);
        position_previous.at(1) = position_current.at(1);
        
        position_current.at(0) = position_next.at(0);
        position_current.at(1) = position_next.at(1);
        
        if(position_next.at(0) == total_rows - 1 && position_next.at(1) == total_columns - 1)
            break;
    }
    
    inFS.close();
    
    return 0;
}
