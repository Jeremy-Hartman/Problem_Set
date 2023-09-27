//Problem 32 - Solutions



#include <iostream>

using namespace std;

int main()
{
	int x, result;

	cout<<"Please enter a number: ";
	cin>>x;

	for(int i = 0; i<=x ; i++) // initialize i = 0, while i <= x, increment i by 1 (during iteration)
	{
		result=i*(i+1)/2; 	   // while true calculate result
	}
	cout<<"Sum of all numbers up to "<<x<<": "<<result<<endl;


	return 0;
}



