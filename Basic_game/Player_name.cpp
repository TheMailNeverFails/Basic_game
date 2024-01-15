#include <iostream>
#include <string> //library for strings
#include "Player_name.h" //includes my header file
using namespace std;

void EnterName() {
	string variable_login_name;
	cout << endl << "Please enter your firstname:" << endl;
	cin >> variable_login_name; 																										
	cout << endl << "Welcome, " << variable_login_name << endl;

}

