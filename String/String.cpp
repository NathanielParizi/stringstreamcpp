/*
 * String.cpp
 *
 *  Created on: Jul 7, 2018
 *      Author: Nathaniel Parizi
 */

#include <iostream>
#include<sstream>
using namespace std;

int main() {

	// object (string is a class)
	string value = "Hello this is a string. ";
	string value2 = "How are you doing?";
	string greeting = "Welcome to my C++ code";

	string val3 = value + value2;

	cout << value << value2 << endl;
	cout << "concatenation: " << val3 << endl;
	cout << greeting << endl;

	cout << "What's your name?" << endl;
	string input; // declare an object of type string

	cin >> input;
	cout << "Hello, " << input << " How much EXP do you have in C++? " << flush;
	int exp;
	cin >> exp;
	cout << exp << " experience points?" << endl;
	//insertion operator: <<
	//extraction operator: >>

	string name = input;
	int age = 30;

	stringstream ss;

	ss << "Name  is: ";
	ss << name;
	ss << "Age  is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;

	return 0;
}
