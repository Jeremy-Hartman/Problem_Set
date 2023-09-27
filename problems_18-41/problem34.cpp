//Problem 34 - Solutions



#include <iostream>

using namespace std;

int main()
{
	int x, result;

	cout<<"Please enter a number: ";
	cin>>x;

	for(int i = 0; i<=x ; i++) // initialize i = 0, while i <= x, increment i by 1 (during iteration)
	{
		if(i%2>0)	//while above comment is true, if i%2==0, result=result+i (sum of all odd number iterations)
		{
			result+=i;
		}
	}
	cout<<"Sum of all odd numbers up to "<<x<<": "<<result<<endl;


	return 0;
}



