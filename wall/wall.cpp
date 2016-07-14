#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
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

void print_text_30(string text)
{
    cout << left << setw(30) << " " << right << setw(30) << text << endl;
    return;
}

void borders()
{
    print_text_10("(_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_}{_)");
    cout << endl;
    return;
}

void print_delay_10(string text)
{
    print_text_10(text);
    timer(2);
    return;
}

void continue_function()
{
  indent();
  print_text_10("Continue... ");
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

void day_zero()
{
    indent();
    print_text_10("  ^    ^    ^       ^  ");
    print_text_10(" |D|  |A|  |Y|     |0| ");
    print_text_10("<___><___><___>   <___>");
    return;
}

void day_zero_title()
{   
    timer(2);
    indent();
    print_text_10("╔╦═╗ ╦ ╔═╗  ╦═╗ ╦ ╔═╗ ╔═╗");
    print_text_10(" ║ ║ ║ ║╣   ╠╦╝ ║ ╚═╗ ║╣ ");
    print_text_10("═╩═╝ ╩ ╚═╝  ╩╚═ ╩ ╚═╝ ╚═╝");
    return;
}

void narration_1()
{
    timer(2);
    indent();
    borders();
    print_text_10("In the basement of Trump Tower,");
    print_text_10("deep in Trump's tightly-secured lair,");
    print_text_10("a crowd as loud as lions surrounds an empty podium in the middle of the room");
    print_text_10("waiting for their prophet to deliver his first message.");
    return;
}

void narration_2()
{
    indent();
    borders();
    print_text_10("You stand there");
    cout << left << setw(9) << " " << right << setw(9) << "quietly," << endl;
    print_text_10("as straight as a stick,");
    print_text_10("sweating and breathing heavily");
    print_text_10("in front of Trump's podium.");
}

void bam()
{
    indent();
    print_text_10("▄▄▄▄·  ▄▄▄· • ▌ ▄ ·. ▄▄ ");
    print_text_10("▐█ ▀█▪▐█ ▀█ ·██ ▐███▪██▌");
    print_text_10("▐█▀▀█▄▄█▀▀█ ▐█ ▌▐▌▐█·▐█·");
    print_text_10("██▄▪▐█▐█ ▪▐▌██ ██▌▐█▌.▀ ");
    print_text_10("·▀▀▀▀  ▀  ▀ ▀▀  █▪▀▀▀ ▀ ");
    return;
}

void narration_3()
{
    timer(2);
    indent();
    borders();
    print_text_10("REPORTER 1: Was that an earthquake?!");
    print_text_10("REPORTER 2: Was that 9/11?!");
    print_text_10("REPORTER 3: No, it's HIM!");
    return;
}

void narration_4()
{
    indent();
    borders();
    print_text_10("Everyone turns their attention to the 6 ft 2 in. giant");
    print_text_10("whose glitter suit shines under the lightbeams hovering the once-empty podium.");
    print_text_10("Trump scans the room furiously with his icy blue eyes,");
    print_text_10("and the whole room freezes.");
    return;
}

void dialogue_1()
{
    indent();
    borders();
    print_text_10("TRUMP: The other candidates —");
    cout << left << setw(15) << " " << right << setw(15) << "they went in," << endl;
    print_text_17("they didn't know the air conditioning didn't work.");
    print_text_17("They sweated like dogs.");
    print_text_17("They didn't know the room was too big because they didn't have anybody there.");
    print_text_17("How are they gonna beat ISIS?");
    print_text_17("I don't think it's gonna happen.");
    return;
}

void narration_5()
{
    indent();
    borders();
    print_text_10("Laughter and cheers bounce off the walls.");
    print_text_10("Everyone (except you) jumps and waves their arms frantically");
    print_text_10("while reaching towards their soon-to-be leader.");
    return;
}

void narration_6()
{
    indent();
    borders();
    print_text_10("\"Too poor to fix air conditioners.\",");
    print_text_10("you take note in your journal.");
    return;
}

void narration_7()
{
    indent();
    borders();
    print_text_10("Suddenly, a shadow covers the pages of your journal.");
    print_text_10("You look up, ");
    print_text_10("and a halo surrounds the man standing before you.");
    return;
}

void narration_8()
{
    indent();
    borders();
    print_text_10("The man steps closer,");
    print_text_10("and his pink face becomes visible.");
    return;
}

void narration_9()
{
    indent();
    borders();
    print_text_10("You taste the saltiness of your sweat");
    print_text_10("that trickles down your bald head like rain.");
}

void narration_10()
{
    indent();
    borders();
    print_text_10("Trump looks down at your journal and chuckles.");
    print_text_10("Cold air from his nose tickles your forehead.");
}

void dialogue_2()
{
    indent();
    borders();
    print_text_10("TRUMP: Looks like I figured out where the heat's coming from.");
    print_text_17("You boil eggs with that hot-head of yours?");
    timer(2);
    print_text_10("YOU: Pardon?");
    timer(2);
    print_text_10("TRUMP: Chill.");
    timer(2);
    cout << left << setw(12) << " " << right << setw(12) << "Unless," << endl;
    timer(2);
    cout << left << setw(13) << " " << right << setw(13) << "you can't" << endl;
    timer(2);
    print_text_17("because you're Mexican?");
    timer(2);
    cout << left << setw(16) << " " << right << setw(16) << "Or a Democrat?" << endl;
    timer(2);
    cout << left << setw(17) << " " << right << setw(17) << "Chinese? Korean? Taliban?" << endl;
    timer(2);
    print_text_10("YOU: Erm-");
    timer(2);
    print_text_10("TRUMP: Well, which is it?");
    timer(2);
    print_text_10("YOU: ...");
    timer(2);
    print_text_10("TRUMP: ...");
    timer(2);
    cout << left << setw(11) << " " << right << setw(11) << "Hmph." << endl;
    return;
}

void choice_1()
{
    indent();
    print_text_10("The choice is yours.");
    print_text_10("1 - Swear loyalty");
    print_text_10("2 - Deny support");
    cout << endl;
    return;
}

void choice_2()
{  
    indent();
    print_text_10("The choice is yours.");
    print_text_10("1 - Plead forgiveness");
    print_text_10("2 - Defend yourself");
    cout << endl;
    return;
}

void choice_3()
{
    indent();
    print_text_10("The choice is yours.");
    print_text_10("1 - Give money");
    print_text_10("2 - Kiss him");
    print_text_10("3 - Give him your journal");
    cout << endl;
    return;
}

void choice_4()
{
    indent();
    print_text_10("The choice is yours.");
    print_text_10("1 - For his campaign");
    print_text_10("2 - For his wall project");
    print_text_10("3 - For him to keep");
    cout << endl;
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

void scratch()
{
    indent();
    print_text_10("  ██████  ▄████▄   ██▀███   ▄▄▄      ▄▄▄█████▓ ▄████▄   ██░ ██ ");
    print_text_10("▒██    ▒ ▒██▀ ▀█  ▓██ ▒ ██▒▒████▄    ▓  ██▒ ▓▒▒██▀ ▀█  ▓██░ ██▒");
    print_text_10("░ ▓██▄   ▒▓█    ▄ ▓██ ░▄█ ▒▒██  ▀█▄  ▒ ▓██░ ▒░▒▓█    ▄ ▒██▀▀██░");
    print_text_10("  ▒   ██▒▒▓▓▄ ▄██▒▒██▀▀█▄  ░██▄▄▄▄██ ░ ▓██▓ ░ ▒▓▓▄ ▄██▒░▓█ ░██ ");
    print_text_10("▒██████▒▒▒ ▓███▀ ░░██▓ ▒██▒ ▓█   ▓██▒  ▒██▒ ░ ▒ ▓███▀ ░░▓█▒░██▓");
    print_text_10("▒ ▒▓▒ ▒ ░░ ░▒ ▒  ░░ ▒▓ ░▒▓░ ▒▒   ▓▒█░  ▒ ░░   ░ ░▒ ▒  ░ ▒ ░░▒░▒");
    print_text_10("░ ░▒  ░ ░  ░  ▒     ░▒ ░ ▒░  ▒   ▒▒ ░    ░      ░  ▒    ▒ ░▒░ ░");
    print_text_10("░  ░  ░  ░          ░░   ░   ░   ▒     ░      ░         ░  ░░ ░");
    print_text_10("      ░  ░ ░         ░           ░  ░         ░ ░       ░  ░  ░");
    print_text_10("         ░                                    ░                ");
    return;    
}

void wrong_choice_1()
{
    indent();
    borders();
    print_text_10("TRUMP: My fellow Americans,");
    print_text_17("a traitor stands before me.");
    print_text_17("Gather your fore-fathers' strength and attack him!");
    timer(2);
    indent();
    scratch();
    timer(2);
    indent();
    print_text_10("You fall down on your pool of blood.");
    print_text_10("[█|_|_|_|_|_|_|_|_|_] 10%");
    timer(2);
    indent();
    print_text_10("TRUMP: Any last words?");
    trial();
    choice_2();
    return;
}

void instructions()
{
  indent();
  borders();
  print_text_10("• Will you fulfill Trump's dream of building a wall? Or stop him? The choice is yours.");
  print_text_10("• Choose wisely. Whichever path you choose, make sure it's the safest choice.");
  print_text_10("• You have a life bar. Once it hits 0%, you're dead.");
  print_text_10("• If you take damage and you're still alive, you will have chances to redeem yourself.");
  print_text_10("• Press ENTER to continue the story");
  return;
}

int main()
{
    string continue_char;
    unsigned selection;
    
    opening();
    title();
    instructions();
    continue_function();
    getline(cin, continue_char);
    
    day_zero();
    day_zero_title();
    
    narration_1();
    continue_function();
    getline(cin, continue_char);
    
    narration_2();
    continue_function();
    getline(cin, continue_char);
    
    bam();
    narration_3();
    continue_function();
    getline(cin, continue_char);
    
    narration_4();
    continue_function();
    getline(cin, continue_char);
    
    dialogue_1();
    continue_function();
    getline(cin, continue_char);
    
    narration_5();
    continue_function();
    getline(cin, continue_char);
    
    narration_6();
    continue_function();
    getline(cin, continue_char);
    
    narration_7();
    continue_function();
    getline(cin, continue_char);
    
    narration_8();
    continue_function();
    getline(cin, continue_char);
    
    narration_9();
    continue_function();
    getline(cin, continue_char);
    
    narration_10();
    continue_function();
    getline(cin, continue_char);
    
    dialogue_2();
    continue_function();
    getline(cin, continue_char);
    
    trial();
    choice_1();
    cout << "Enter your selection here: ";
    cin >> selection;
    
    if(selection == 1)
    {
        indent();
        borders();
        print_text_10("TRUMP: Prove it.");
        timer(2);
        trial();
        choice_3();
        cout << "Enter your selection here: ";
        cin >> selection;
        if(selection == 1)
        {
            indent();
            borders();
            print_text_10("TRUMP: What's this for?");
            timer(2);
            trial();
            choice_4();
            cout << "Enter your selection here: ";
            cin >> selection;
            indent();
            borders();
            print_text_10("TRUMP: What am I, some kind of charity bank?");
            timer(2);
            print_text_10("YOU: No, sir. Just thought I could help, sir.");
            timer(2);
            print_text_10("TRUMP: I don't need money.");
            timer(2);
            print_text_10("YOU: I know. But you must want it, sir. Right?");
            timer(2);
            print_text_10("TRUMP: I'm never short on money, so I don't want and need your money.");
            timer(2);
            print_text_10("YOU: How else can I show my support then?");
            timer(2);
            print_text_10("TRUMP: Don't ask me; surprise me.");
            timer(2);
            print_text_10("End of Day 10");
            indent();
            print_text_10("To be continued...");
        }
        else if(selection == 2)
        {
            indent();
            borders();
            print_text_10("TRUMP: EW! HOMOPHOBE!");
            print_text_17("Don't defile my Christianhood with your saucy lips!");
            timer(2);
            wrong_choice_1();
            cout << "Enter your selection here: ";
            cin >> selection;
            indent();
            borders();
            print_text_10("TRUMP: Sorry amigo, but me no gusta.");
            indent();
            print_text_10("Game over");
        }
        else if(selection == 3)
        {
            indent();
            borders();
            print_text_10("Trump reads your journal.");
            timer(2);
            indent();
            wrong_choice_1();
            cout << "Enter your selection here: ";
            cin >> selection;
            indent();
            borders();
            print_text_10("TRUMP: Sorry amigo, but me no gusta.");
            indent();
            print_text_10("Game over");
        }
    }
    else if(selection == 2)
    {
        indent();
        wrong_choice_1();
        cout << "Enter your selection here: ";
        cin >> selection;
        indent();
        borders();
        print_text_10("TRUMP: Sorry amigo, but me no gusta.");
        indent();
        print_text_10("Game over");
    }
    
    return 0;
}
