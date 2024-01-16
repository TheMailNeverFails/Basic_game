#include <iostream> //library for input output commands
#include <string> //library for strings
#include <windows.h> //library i used for the sleep function
#include <limits>
#include "Player_name.h" //includes my header file
using namespace std;
bool YES_NO() {
	cout << "Are you sure this is your name?  Yes or No?" << endl;
	char user_input;
	cin >> user_input;

	return (user_input == 'Yes' || user_input == 'yes' || user_input == 'YES');
	//cin >> Confirmation();
}


int Confirmation() {
	if (YES_NO()) {
		cout << "you have confirmed this is your username" << endl;
	}
	else {
		cout << "you have not confirmed your username" << endl;
		}
		return 0;
	}


void EnterName() {
	string variable_login_name;
	cout << endl << "Please enter your firstname:" << endl;
	cin >> variable_login_name;
	YES_NO();
	cout << endl << "Welcome, " << variable_login_name << endl;
}

