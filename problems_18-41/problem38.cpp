//Problem 38 - Solution



#include <iostream>

using namespace std;

int main()
{
	int x,r, result = 0, temp;


	cout<<"Please enter a number: ";
	cin>>x;

	temp = x;
	
	while(x>0)						//While x>0, run this code
	{
		r = x % 10;			

		result = (result * 10) + r; //first iteration will give us the ones decimal place value, second tens, and so on.

		x/=10;   					//divide by 10 to move decimal left one place
	}

	if (temp==result) 				//if the reverse of the x stored integer value equals temp(the value of the original x value),
	{								//execute this code
		cout<<"Number is a palindrome"<<endl;
	}
	else							// if not execute this code
	{
		cout<<"Number is not a palindrome"<< endl;
	}

	return 0; 
}



