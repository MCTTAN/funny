#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;

void timer(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
	return;
}

void print_text_1(string text)
{
    cout << left << setw(10) << " " << right << setw(10) << text << endl;
    timer(2);
    return;
}

void print_text_2(string text)
{
    cout << left << setw(17) << " " << right << setw(17) << text << endl;
    timer(2);
    return;
}

void day_zero()
{
    timer(2);
    cout << endl << endl << endl;
    cout << left << setw(10) << " " << right << setw(10) << "  ^    ^    ^       ^  " << endl;
    cout << left << setw(10) << " " << right << setw(10) << " |d|  |a|  |y|     |0| " << endl;
    cout << left << setw(10) << " " << right << setw(10) << "<___><___><___>   <___>" << endl;
    return;
}

void chapter_zero()
{   
    timer(2);
    cout << endl << endl << endl;
    cout << left << setw(10) << " " << right << setw(10) << "┌┬┐ ┬ ┌─┐  ┬─┐ ┬ ┌─┐ ┌─┐" << endl;
    cout << left << setw(10) << " " << right << setw(10) << " ││ │ ├┤   ├┬┘ │ └─┐ ├┤ " << endl;
    cout << left << setw(10) << " " << right << setw(10) << "─┴┘ ┴ └─┘  ┴└─ ┴ └─┘ └─┘" << endl;
    return;
}

void dialogue_1()
{
    timer(2);
    cout << endl << endl << endl;
    print_text_1("TRUMP: The other candidates — they went in, they didn't know the air conditioning didn't work.");
    print_text_2("They sweated like dogs.");
    print_text_2("They didn't know the room was too big because they didn't have anybody there.");
    print_text_2("How are they gonna beat ISIS?");
    print_text_2("I don't think it's gonna happen.");
    cout << endl << endl << endl;
    return;
}

void opening()
{
    timer(2);
    cout << endl << endl << endl;
    print_text_1("I would build a great wall.");
    print_text_1("And nobody builds walls better than me, believe me.");
    print_text_1("And I'll build them very inexpensively.");
    print_text_1("I will build a great, great wall on our southern border and I'll have Mexico pay for that wall.");
    print_text_2("-Donald Trump");
    return;
}

void title()
{
    timer(2);
    cout << endl << endl << endl;
    cout << left << setw(30) << " " << right << setw(30) << "██╗    ██╗ █████╗ ██╗     ██╗     " << endl;
    cout << left << setw(30) << " " << right << setw(30) << "██║    ██║██╔══██╗██║     ██║     " << endl;
    cout << left << setw(30) << " " << right << setw(30) << "██║ █╗ ██║███████║██║     ██║     " << endl;
    cout << left << setw(30) << " " << right << setw(30) << "██║███╗██║██╔══██║██║     ██║     " << endl;
    cout << left << setw(30) << " " << right << setw(30) << "╚███╔███╔╝██║  ██║███████╗███████╗" << endl;
    cout << left << setw(30) << " " << right << setw(30) << " ╚══╝╚══╝ ╚═╝  ╚═╝╚══════╝╚══════╝" << endl;
    return;
}

void main_menu()
{
    cout << endl << endl << endl;
    cout << left << setw(10) << " " << right << setw(10) << "┌┬┐ ┌─┐ ┬ ┌┐┌  ┌┬┐ ┌─┐ ┌┐┌ ┬ ┬" << endl;
    cout << left << setw(10) << " " << right << setw(10) << "│││ ├─┤ │ │││  │││ ├┤  │││ │ │" << endl;
    cout << left << setw(10) << " " << right << setw(10) << "┴ ┴ ┴ ┴ ┴ ┘└┘  ┴ ┴ └─┘ ┘└┘ └─┘" << endl << endl;
    cout << left << setw(10) << " " << right << setw(10) << "1 - New Game" << endl;
    cout << left << setw(10) << " " << right << setw(10) << "2 - Load Game" << endl;
    cout << endl << endl << endl;
    return;
}

int main()
{
    ifstream outFS;
    unsigned selection;
    char key;
    
    opening();
    title();
    main_menu();
    
    cout << left << setw(10) << " " << right << setw(10) << "Enter your selection here: ";
    cin >> selection;
    if(selection == 1)
    {
        outFS.open("new_game.txt");
    }
    else if(selection == 2)
    {
        outFS.open("load_game.txt");
    }
    else
    {
        cout << left << setw(10) << " " << right << setw(10) << "Try again." << endl;
        while(selection != 1 && selection != 2)
        {
            cout << left << setw(10) << " " << right << setw(10) << "Enter your selection here: ";
            cin >> selection;
            if(selection == 1)
            {
                outFS.open("new_game.txt");
            }
            else if(selection == 2)
            {
                outFS.open("load_game.txt");   
            }
            else
            {
                cout << left << setw(10) << " " << right << setw(10) << "Try again." << endl;
            }
        }
        
    }
    
    day_zero();
    chapter_zero();
    dialogue_1();
    cout << left << setw(10) << " " << right << setw(10) << "Press \"N\" to continue, or \"R\" to repeat the story." << endl;
    cout << left << setw(10) << " " << right << setw(10) << "Enter your selection here: ";
    cin >> key;
    if(toupper(key) != 'N' && toupper(key) != 'R')
    {
        cout << left << setw(10) << " " << right << setw(10) << "Try again." << endl;
        while(toupper(key) != 'N' && toupper(key) != 'R')
        {
            cout << left << setw(10) << " " << right << setw(10) << "Press \"N\" to continue, or \"R\" to repeat the story." << endl;
            cout << left << setw(10) << " " << right << setw(10) << "Enter your selection here: ";
            cin >> key;
            if(toupper(key) == 'N')
            {
                
            }
            else if(toupper(key) == 'R')
            {
                
            }
        }
    }
    
    else if(toupper(key) == 'N')
    {
        
    }
    
    else if(toupper(key) == 'R')
    {
        
    }
    
    return 0;
}
