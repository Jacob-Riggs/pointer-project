// pointer-project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>;

using namespace std;


string getNameFromUser(string prompt) { // This function will get a name from the user to use later on in the program
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int getAmountFromUser(string prompt) { // This function will get an integer from the user to use later on in the program
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

int main()
{
	
	cout << "Hello, and welcome to the pointer project!\n\n";
	string name = getNameFromUser("Please enter a name: "); // Stores the name 
	int amount = getAmountFromUser("Please enter a number: "); // Stores the amount
	int* pAmount = &amount; // A pointer that will hold the address of the amount

	cout << "Someone named ";
	cout << name; // Displays the name
	cout << " has an amount of ";
	cout << "$" << amount << "."; // Displays the amount straight through the variable
	cout << "\nBut they come across an extra $250.";
	amount += 250; // Adds onto the amount straight from the variable
	cout << " Now they have ";
	cout << "$" << *pAmount << "."; // Displays the NEW value through the pointer variable
	cout << "\nAnd now, they were gifted another $50.";
	*pAmount += 50; // Adds onto the amount from the pointer variable
	cout << " Now they have ";
	cout << "$" << amount << ".\n"; // Displays the NEW value from the regular variable
	
	system("pause");
	return 0;
}

