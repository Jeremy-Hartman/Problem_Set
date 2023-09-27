//Problem 6 - Solution

#include<iostream>

using namespace std;

int main()
{
	int X;
	int Y;
	int result;

	cout<<"Please enter first number (x): ";
	cin>> X;
	cout<<"Please enter second number (y): ";
	cin>> Y;

	result = X % Y; // modulo divides and show remainder

	cout<< "Remainder ( X % Y): " << result << endl;

	return 0;
}

