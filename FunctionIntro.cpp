// FunctionIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

//function definition
//void means nothing is returned from the function

//void greet_someone() {
//		cout << "\n Hello World";
//}

float x_value() {
	float x;
	cout << "\n Enter a number: ";
	cin >> x;
	return(x);
}

float y_value() {
	float y;
	cout << "\n Enter a number: ";
	cin >> y;
	return(y);
}
void add_numbers() {
	/*float x, y;
	cout << "\n Enter two numbers to add: ";
	cin >> x >> y;*/
	float x, y;
	x=x_value(); //function call
	y=y_value(); //function call
	cout << "\n The sum of the given numbers is " << (x + y);
}
//void diff_numbers() {
	//float x, y;
	//cout << "\n Enter two numbers to find the difference: ";
	//cin >> x >> y;
	//cout << "\n The difference of the given numbers is " << (x - y);
//}

//void multi_numbers() {
	/*float x, y;
	cout << "\n Enter two numbers to multiply: ";
	cin >> x >> y;*/
	//cout << "\n The product of the given numbers  is " << (x * y);
//}
int main()
{
	//greet_someone();//function call

	add_numbers();
	//diff_numbers();
	//multi_numbers();
}

