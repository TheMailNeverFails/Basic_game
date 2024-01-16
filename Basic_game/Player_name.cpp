#include <iostream>
#include <string>
#include "Player_name.h"
using namespace std;

bool Confirmation() // Function to confirm the entered username
{
	string user_input;
	cout << "Are you sure this is your username? Yes or No?" << endl; // Ask the user for confirmation
	cin >> user_input; // read user input

	for (char& y : user_input) // Convert the input to lowercase for case-insensitive comparison (note that the variable name 'y' is arbitrary you can call it anything but to make things easier for myself i have names it y in reference to the fact it's being used to see whether yes has been enetered regardless of it's capitlisation)
	{
		y = tolower(y);
	}

	return user_input == "yes"; // Return true if the user confirms with "yes"
}

void EnterName() // Function to enter the username with confirmation
{
	string variable_login_name;
	cout << endl << "Please enter your username:" << endl;// Prompt the user to enter their username
	cin >> variable_login_name;// Read the entered username

	if (!Confirmation()) // Check if the user confirms the entered username
	{
		cout << "You have not confirmed your username, please re-enter it" << endl; // If not confirmed, ask the user to re-enter the username
		EnterName(); // Recursive call to re-enter the username
	}

	else
	{
		cout << endl << "Welcome, " << variable_login_name << endl; // If confirmed, welcome the user
	
	}
}