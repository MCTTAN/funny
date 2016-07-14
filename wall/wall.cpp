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

void print_delay_10(string text)
{
    print_text_10(text);
    timer(2);
    return;
}

void print_delay_17(string text)
{
    print_text_17(text);
    timer(2);
    return;
}

void main_menu()
{
    cout << endl << endl << endl;
    print_text_10("┌┬┐ ┌─┐ ┬ ┌┐┌  ┌┬┐ ┌─┐ ┌┐┌ ┬ ┬");
    print_text_10("│││ ├─┤ │ │││  │││ ├┤  │││ │ │");
    print_text_10("┴ ┴ ┴ ┴ ┴ ┘└┘  ┴ ┴ └─┘ ┘└┘ └─┘");
    cout << endl;
    print_text_10("1 - New Game");
    print_text_10("2 - Load Game");
    cout << endl << endl << endl;
    print_text_10("Enter your selection here: ");
    return;
}


void narration_1()
{
    timer(2);
    cout << endl << endl << endl;
    print_delay_10("In the basement of Trump Tower,");
    print_delay_10("deep in Trump's tightly-secured lair,");
    print_delay_10("a crowd as loud as lions surrounds an empty podium in the middle of the room");
    print_delay_10("waiting for their prophet to deliver his first message.");
    return;
}

void narration_2()
{
    cout << endl << endl << endl;
    print_delay_10("You stand there");
    cout << left << setw(9) << " " << right << setw(9) << "quietly," << endl;
    timer(2);
    print_delay_10("as straight as a stick,");
    print_delay_10("sweating and breathing heavily");
    print_delay_10("in front of Trump's podium.");
}

void bam()
{
    cout << endl << endl << endl;
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
    cout << endl << endl << endl;
    print_delay_10("REPORTER 1: Was that an earthquake?!");
    print_delay_10("REPORTER 2: Was that 9/11?!");
    print_delay_10("REPORTER 3: No, it's HIM!");
    return;
}

void narration_4()
{
    cout << endl << endl << endl;
    print_delay_10("Everyone turns their attention to the 6 ft 2 in. giant");
    print_delay_10("whose glitter suit shines under the lightbeams hovering the once-empty podium.");
    print_delay_10("Trump scans the room furiously with his icy blue eyes,");
    print_delay_10("and the whole room freezes.");
    return;
}

void dialogue_1()
{
    cout << endl << endl << endl;
    print_delay_10("TRUMP: The other candidates —");
    cout << left << setw(15) << " " << right << setw(15) << "they went in," << endl;
    timer(2);
    print_delay_17("they didn't know the air conditioning didn't work.");
    print_delay_17("They sweated like dogs.");
    print_delay_17("They didn't know the room was too big because they didn't have anybody there.");
    print_delay_17("How are they gonna beat ISIS?");
    print_delay_17("I don't think it's gonna happen.");
    return;
}

void narration_5()
{
    cout << endl << endl << endl;
    print_delay_10("Laughter and cheers bounce off the walls.");
    print_delay_10("Everyone (except you) jumps and waves their arms frantically");
    print_delay_10("while reaching towards their soon-to-be leader.");
    return;
}

void narration_6()
{
    cout << endl << endl << endl;
    print_delay_10("\"Too poor to fix air conditioners.\",");
    print_delay_10("you take note in your journal.");
    return;
}

void narration_7()
{
    cout << endl << endl << endl;
    print_delay_10("Suddenly, a shadow covers the pages of your journal.");
    print_delay_10("You look up, ");
    print_delay_10("and a halo surrounds the man standing before you.");
    return;
}

void narration_8()
{
    cout << endl << endl << endl;
    print_delay_10("The man steps closer,");
    print_delay_10("and his pink face becomes visible.");
    return;
}

void narration_9()
{
    cout << endl << endl << endl;
    print_delay_10("You taste the saltiness of your sweat");
    print_delay_10("that trickles down your bald head like rain.");
}

void narration_10()
{
    cout << endl << endl << endl;
    print_delay_10("Trump looks down at your journal and chuckles.");
    print_delay_10("Cold air from his nose tickles your forehead.");
}

void dialogue_2()
{
    cout << endl << endl << endl;
    print_delay_10("TRUMP: Looks like I figured out where the heat's coming from.");
    print_delay_17("You boil eggs with that hot-head of yours?");
    print_delay_10("YOU: Pardon?");
    print_delay_10("TRUMP: Chill.");
    cout << left << setw(12) << " " << right << setw(12) << "Unless," << endl;
    timer(2);
    cout << left << setw(13) << " " << right << setw(13) << "you can't" << endl;
    print_delay_17("because you're Mexican?");
    cout << left << setw(15) << " " << right << setw(15) << "Or a Democrat?" << endl;
    cout << left << setw(16) << " " << right << setw(16) << "Chinese? Korean? Taliban?" << endl;
    print_delay_10("YOU: Erm-");
    print_delay_10("TRUMP: Well, which is it?");
    print_delay_10("YOU: ...");
    print_delay_10("TRUMP: ...");
    cout << left << setw(11) << " " << right << setw(11) << "Hmph." << endl;
    timer(2);
}

void trial_1()
{
    cout << endl << endl << endl;
    print_text_10("┌┬┐┬─┐┬┌─┐┬  ");
    print_text_10(" │ ├┬┘│├─┤│  ");
    print_text_10(" ┴ ┴└─┴┴ ┴┴─┘");
    return;
}

void health_bar()
{
    cout << endl << endl << endl;
    print_text_10("[█|█|█|█|█|█|█|█|█|█] 100%");
    return;
}

void choice_1()
{
    cout << endl << endl << endl;
    print_text_10("The choice is yours.");
    print_text_10("1 - Swear loyalty");
    print_text_10("2 - Deny support");
    cout << endl;
    print_text_10("Enter your selection here: ");
    return;
}

void scratch()
{
    cout << endl << endl << endl;
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

void choice_2()
{  
    cout << endl << endl << endl;
    print_delay_10("The choice is yours.");
    print_delay_10("1 - Plead forgiveness");
    print_delay_10("2 - Defend yourself");
    cout << "Enter your selection here: ";
    return;
}

void choice_3()
{
    cout << endl << endl << endl;
    print_text_10("The choice is yours.");
    print_text_10("1 - Give money");
    print_text_10("2 - Kiss him");
    print_text_10("3 - Give him your journal");
    cout << endl;
    print_text_10("Enter your selection here: ");
    return;
}

void choice_4()
{
    cout << endl << endl << endl;
    print_text_10("The choice is yours.");
    print_text_10("1 - For his campaign");
    print_text_10("2 - For his wall project");
    print_text_10("3 - For him to keep");
    cout << endl;
    print_text_10("Enter your selection here: ");
    return;   
}

int main()
{
    ifstream outFS;
    unsigned selection;
    char key;
    
    opening();
    title();
    //main_menu();
    
    //cin >> selection;
    //access_main_selections(selection);
    
    day_zero();
    chapter_zero();
    narration_1();
    narration_2();
    bam();
    narration_3();
    narration_4();
    dialogue_1();
    narration_5();
    narration_6();
    narration_7();
    narration_8();
    narration_9();
    narration_10();
    dialogue_2();
    trial_1();
    health_bar();
    choice_1();
    cin >> selection;
    if(selection == 1)
    {
        cout << endl << endl << endl;
        print_text_10("TRUMP: Prove it.");
        trial_1();
        choice_3();
        cin >> selection;
        if(selection == 1)
        {
            cout << endl << endl << endl;
            print_text_10("TRUMP: What's this for?");
            trial_1();
            choice_4();
            cin >> selection;
        }
        else if(selection == 2)
        {
            cout << endl << endl << endl;
            print_text_10("TRUMP: EW! A HOMOPHOBE!");
            print_delay_17("Don't defile my Christianhood with your saucy lips!");
            print_delay_17("My fellow Americans,");
        }
        else if(selection == 3)
        {
            cout << endl << endl << endl;
            print_text_10("Trump reads your journal.");
            timer(2);
            cout << endl << endl << endl;
            print_text_10("TRUMP: My fellow Americans,");
        }
    }
    else if(selection == 2)
    {
        cout << endl << endl << endl;
        print_text_10("TRUMP: My fellow Americans,");
        print_delay_17("a traitor stands before me.");
        print_delay_17("Gather your fore-fathers' strength and attack him!");
        scratch();
        cout << endl << endl << endl;
        timer(2);
        print_delay_10("You fall down on your pool of blood.");
        print_delay_10("[█|_|_|_|_|_|_|_|_|_] 10%");
        cout << endl << endl << endl;
        print_text_10("TRUMP: Any last words?");
        trial_1();
        choice_2();
        cin >> selection;
        cout << endl << endl << endl;
        print_delay_10("TRUMP: Sorry amigo, but me no gusta.");
        cout << endl << endl << endl;
        print_delay_10("Game over");
    }
    
    return 0;
}
