#include <iostream> //library for input output commands
#include <string> //library for strings
#include <windows.h> //library i used for the sleep function
using namespace std;
#include "Player_name.h" //includes my header file


void EnterName() {
	string variable_login_name;
	cout << endl << "Please enter your firstname:" << endl;
	cin >> variable_login_name; 			
	cout << endl << "are you sure this is your name?";

	cout << endl << "Welcome, " << variable_login_name << endl;

}

