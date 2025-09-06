// Tommy Yang
// Assignment 2 - Rectangle Area 

#include <iostream>
#include <conio.h>

using namespace std;

//declaring my prototypes. using doubles for my data type. Listed the four functions as neeeded. 
double GetLengthFromUser();
double GetWidthFromUser();
double CalculateArea(double length, double width);
void DisplayArea(double area);

int main()
{
	// Gets the length from the user.
	double length = GetLengthFromUser();

	// Gets the width from the user.
	double width = GetWidthFromUser();

	// Caluclates the area. 
	double area = CalculateArea(length, width);
	
	// Outputs / displays the area for the user. 
	DisplayArea(area);

	(void)_getch();
	return 0;
}


// Function for getting the length. Grabs the value that is inputted by the user. Uses that value to calculate the area later on.
double GetLengthFromUser()
{
	double value = 0;
	cout << "Enter your length here: ";
	cin >> value; 
	return value;
}

// Function for getting the width. Grabs the value that is inputted by the user. Uses that value to calculate the area later on.
double GetWidthFromUser()
{
	double value = 0;
	cout << "Enter your width here: ";
	cin >> value; 
	return value;
}

// Function for calculating area
double CalculateArea(double length, double width)
{
	return length * width;
}

// Display Area function - used void since the functions job is the display the results. no return return value needed.
void DisplayArea(double area) 
{
	cout << "The area for your rectangle is " << area << ".";
}