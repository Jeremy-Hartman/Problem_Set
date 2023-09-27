//Problem 22 - Solution



#include<iostream>

using namespace std;

int main()
{
	int x;

	cout<<"Please enter number: ";
	cin>>x;

	if(x >= 0)	// 1a. if x is greater than or equal to 0
	{
		cout<<"Number is positive"<<endl; //if 1a. is true cout<<"Number is positive"<<endl;
	}
	else 		// 1b. if x is less than 0 
		cout<<"Number is negative"<<endl; //if 1b. is true cout<<"Number is negative"<<endl;

	return 0;
}



