//Assignment 3 - Madlibs
//Name: Tommy Yang

#include <iostream>
#include <conio.h>

using namespace std;

struct Entry // entry struct. holds the the name and the input.
{
	string type;
	string input;
};

int main()
{
	int const MaxEntries = 6; // created a constant for the max entries. Max entries is 6 for now.
	Entry entries[MaxEntries] = // created an array of entry structs to hold the entries.
	{
		{"place", ""},
		{"adjective", ""},
		{"noun", ""},
		{"famous person",""},
		{"verb", ""},
		{"animal", ""},
		// add more entries as needed
	};
	
	// For loop to get user input for each entry.
	for (int i = 0; i < MaxEntries; i++)
	{
		cout << (i + 1) << ". Please enter a " << entries[i].type << ": ";
		cin >> entries[i].input;

	}
	
	bool fixEntries = true; // used a boolean for true/false if the user wants to edit their entries.
	while (fixEntries)
	{
		char yesno;
		cout << "Do you want to fix any of your mistakes (y/n): "; // askes the user if they want to fix their mistakes
		cin >> yesno;

		if (yesno == 'y') // if the user selects yes (y), the following prompts pop up.
		{
			int entryNumber; // adding another int for which entry they want to fix.
			cout << "Which entry would you like to fix? (1-6): ";  
			cin >> entryNumber;

			if (entryNumber >= 1 && entryNumber << 6)
			{
				cout << "Enter a " << entries[entryNumber - 1].type << " : "; //entryNumber (input value from the user) minus 1 so it matches the index number.
				cin >> entries[entryNumber - 1].input; 
				continue; //keeps on looping the prompt until the user selects No(n).
			}
		} 
		else (yesno = 'n'); // if they do not want to fix their mistakes, continue and output the entry.;
		{
			fixEntries = false;
		}
	}

	// output the madlib story. Just used "they" for the pronouns,. incase they wanted to use a women instead of a man or vice versa. 
	cout <<
		"Yesterday, I went to " << entries[0].input <<
		" and saw a " << entries[1].input << " " << entries[2].input << "." <<
		" I asked " << entries[3].input <<
		" if they wanted to " << entries[4].input << "," <<
		"but they said they were busy walking their pet " << entries[5].input << ".";


    (void)_getch();
    return 0;

}
