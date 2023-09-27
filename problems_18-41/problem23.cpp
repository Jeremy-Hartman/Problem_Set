//Problem 23 - Solution


#include<iostream>

using namespace std;

int main()
{
	int x;

	cout<<"Please enter number: ";
	cin>>x;

	//there is a better way to right this making either x>0 or x<0 conditional statement 
	//an else statement
	
	if(x == 0)  // 1a x is equivalent to 0
	{
		cout<<"Zero is neither positive nor negative"<<endl; //if 1a. is true execute this output
	}
	if(x > 0)  // 1b x > 0 
	{
		cout<<"Number is positive"<<endl; //if 1b. is true execute this output
	}
	if(x < 0)  //1c  x < 0
	{
		cout<<"Number is negative"<<endl; //if 1c. is true execute this output
	}

	return 0;
}



