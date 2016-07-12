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

void print_text(string text)
{
    cout << left << setw(10) << " " << right << setw(10) << text << endl;
    timer(2);
    return;
}

void opening()
{
    timer(2);
    cout << endl << endl << endl;
    print_text("I would build a great wall.");
    print_text("And nobody builds walls better than me, believe me.");
    print_text("And I'll build them very inexpensively.");
    print_text("I will build a great, great wall on our southern border and I'll have Mexico pay for that wall.");
    print_text("-Donald Trump");
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
    opening();
    title();
    main_menu();
    cout << "Enter your selection here: ";
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
        cout << "Try again." << endl;
        while(selection != 1 && selection != 2)
        {
            cout << "Enter your selection here: ";
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
                cout << "Try again." << endl;
            }
        }
        
    }
    return 0;
}
