//Problem 7 - Solution

#include<iostream>

using namespace std;

int main()
{
	float X;
	float Y;

	cout<<"Please enter first number (x): ";
	cin>> X;
	cout<<"Please enter second number (y): ";
	cin>> Y;


	cout<<"Equality check (X == Y): " << (X == Y) << endl;
	cout<<"Non-equality check (X != Y): " << (X != Y) << endl;
	cout<<"Less than check (X < Y): " << (X < Y) << endl;
	cout<<"Greater than check (X > Y): " << (X > Y) << endl;
	cout<<"Less than or equal check (X <= Y): " << (X <= Y) << endl;
	cout<<"Greater than or equal (X >= Y): " << (X >= Y) << endl;

	return 0;

}

