//Problem 25 - Solution



#include<iostream>

using namespace std;

int main() {
	int x, y;

	cout<<"Please enter first number: ";
	cin>>x;
	cout<<"Please enter second number: ";
	cin>>y;


	if (x % y ==0) //if x mod y gives remainder equivalent to 0
	{
		cout<<"Number "<<x<<" is a multiple of "<<y<<endl;
	} 
	else 	// if x mod y gives remainder != 0
	{
		cout<<"Number "<<x<<" is not a multiple of "<<y<<endl;
	}

	return 0;
}



