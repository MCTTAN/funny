#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <time.h>
using namespace std;

void day_one()
{
    indent();
    print_text_10("  ^    ^    ^       ^  ");
    print_text_10(" |D|  |A|  |Y|     |1| ");
    print_text_10("<___><___><___>   <___>");
    return;
}

void day_one_title()
{
    print_text_10("╦ ╦ ╔═╗ ╦   ╦   ╔═╗");
    print_text_10("╠═╣ ║ ║ ║   ║   ║╣ ");
    print_text_10("╩ ╚ ╚═╝ ╩═╝ ╩═╝ ╚═╝");
    return;
}
