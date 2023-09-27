//Problem 26 - Solution



#include<iostream>

using namespace std;

int main() {
	int number;
	int modulo;

	cout<<"Please enter number: ";
	cin>>number;
	modulo = number % 2; //number % 2 stored in modulo variable

	if (modulo == 0) //if mod == 0
	{
		cout<<"Number is even\n";
	} 
	else  //if mod != 0
	{
		cout<<"Number is odd\n";
	}

	return 0;
}





