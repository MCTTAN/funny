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

int main()
{
    string continue_char;
    unsigned selection;
    
    opening();
    title();
    instructions();
    
    return 0;
}
