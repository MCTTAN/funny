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

void print_text_10(string text)
{
    cout << left << setw(10) << " " << right << setw(10) << text << endl;
    return;
}

void opening()
{
    timer(2);
    cout << endl << endl << endl;
    print_delay_10("I would build a great wall.");
    print_delay_10("And nobody builds walls better than me,");
    print_delay_10("believe me.");
    print_delay_10("And I'll build them very inexpensively.");
    print_delay_10("I will build a great,");
    cout << left << setw(8) << " " << right << setw(8) << "great" << endl;
    timer(2);
    cout << left << setw(7) << " " << right << setw(7) << "wall" << endl;
    timer(2);
    print_delay_10("on our southern border");
    print_delay_10("and I'll have Mexico pay for that wall.");
    print_delay_10("-Donald Trump");
    return;
}

void title()
{
    cout << endl << endl << endl;
    print_text_30("██╗    ██╗ █████╗ ██╗     ██╗     ");
    print_text_30("██║    ██║██╔══██╗██║     ██║     ");
    print_text_30("██║ █╗ ██║███████║██║     ██║     ");
    print_text_30("██║███╗██║██╔══██║██║     ██║     ");
    print_text_30("╚███╔███╔╝██║  ██║███████╗███████╗");
    print_text_30(" ╚══╝╚══╝ ╚═╝  ╚═╝╚══════╝╚══════╝");
    return;
}

int main()
{
    opening();
    title();
    
    return 0;
}
