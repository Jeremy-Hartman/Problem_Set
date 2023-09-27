//Problem 8 - Solution

#include<iostream>

using namespace std;

int main()
{
	float X;
	float Y;


	cout<<"Please enter first number: ";
	cin>> X;
	cout<<"Please enter second number: ";
	cin>> Y;

	bool check = ( X + Y < 100);

	if (check == 1)    //Try and find way to output std out 'true' + 'false'
	{
		cout<<"sum is less than 100: True" << endl;


	}
	else
	{
		cout<< "sum is less than 100: False" << endl;
	}
	

	return 0;
}

