#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <time.h>
using namespace std;

void timer(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
	return;
}

void indent()
{
  cout << endl << endl << endl;
  return;
}

void print_text_10(string text)
{
    cout << left << setw(10) << " " << right << setw(10) << text << endl;
    return;
}

void print_text_17(string text)
{
    cout << left << setw(17) << " " << right << setw(17) << text << endl;
    return;
}

void borders()
{
    print_text_10("(_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_)");
    cout << endl;
    return;
}

void continue_function()
{
  indent();
  print_text_10("Continue... ");
  return;
}

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
    timer(2);
    indent();
    print_text_10("╔╦╗ ╦═╗ ╔═╗ ╦ ╦  ╔═╗ ╦ ╦ ╔═╗ ╔═╗ ╦ ╦ ╔═╗ ╦═╗ ╔╦═╗");
    print_text_10(" ║  ╠╦╝ ║╣  ║ ║  ╚═╗ ╠═╣ ║╣  ╠═╝ ╠═╣ ╠═╣ ╠╦╝  ║ ║");
    print_text_10(" ╩  ╩╚═ ╚═╝ ╚═╝  ╚═╝ ╩ ╩ ╚═╝ ╩   ╩ ╩ ╩ ╩ ╩╚═ ═╩═╝");
    return;
}

void dialogue_3()
{
    indent();
    borders();
    print_text_10("REPOROTER 1: We're a month away from casting our ballots,");
    timer(2);
    print_text_17("and it looks like Clinton may win by a slight margin,");
    timer(2);
    print_text_17("according to this morning's survey:");
    timer(2);
    indent();
    print_text_17("TRUMP:[̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅] 49%");
    print_text_17("CLINTON: [̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅_̲̅] 51%");
    timer(2);
    indent();
    print_text_10("REPORTER 2: Here with us are two fans, each supporters of Trump and Clinton.");
    timer(2);
    print_text_17("They've been faithful ever since they attended the first campaign of their favorite candidates.");
    timer(2);
    print_text_10("GUY: The moment I saw Hillary - destiny was sealed.");
    timer(2);
    print_text_10("REPORTER 1: Could you tell us more? And feel free to introduce yourself.");
    timer(2);
    print_text_10("GUY: It was love at first si-");
    timer(2);
    print_text_17("Er, I mean I love-");
    timer(2);
    print_text_10("REPORTER 2: Well, you clearly love Hillary.");
    timer(2);
    print_text_17("I mean, look at yourself!");
    timer(2);
    print_text_17("You look like her! Hair and everything!");
    timer(2);
    print_text_10("GUY: Ah, thank you.");
    timer(2);
    print_text_17("You can call me Guy, by the way.");
    timer(2);
    print_text_10("REPORTER 1: Guy, what do you have to say about Trump?");
    timer(2);
    print_text_10("GUY: Oh I wish I could say a lot of things about him,");
    timer(2);
    print_text_17("but I'd like to help keep your news show rated PG 13.");
    timer(2);
    print_text_10("REPORTER 2: What about you? Anything to say about the two candidates?");
    timer(2);
    print_text_10("YOU: No comment.");
    timer(2);
    print_text_10("REPORTER 1: That's fine.");
    timer(2);
    print_text_10("REPORTER 2: I'm Jackewbetcha.");
    timer(2);
    print_text_10("REPORTER 1: And I'm Sasquatchewan.");
    timer(2);
    print_text_17("We'll be back after the commercial breaks to broadcast");
    timer(2);
    print_text_17("the final debate. Stay tuned!");
    timer(2);
    return;
}

void trial()
{
    indent();
    borders();
    print_text_10("┌┬┐┬─┐┬┌─┐┬  ");
    print_text_10(" │ ├┬┘│├─┤│  ");
    print_text_10(" ┴ ┴└─┴┴ ┴┴─┘");
    return;
}


int main()
{
    string continue_char;
    unsigned selection;
    
    day_one();
    day_one_title();
    dialogue_3();

    return 0;
}
