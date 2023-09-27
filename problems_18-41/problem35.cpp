//Problem 35 - Solution



#include <iostream>

using namespace std;

int main()
{
	int x;
	int factorial = 1;

	cout<<"Please enter a number: ";
	cin>>x;

	for(int i = 1; i <= x ; ++i) // initialize i = 0, while i <= x, increment i by 1 (during iteration)
	{
		factorial*=i; //while above comment is true, factorial = factorial * i (multiply all i value for all iterations)

	}
		cout<<"Factorial of "<<x<<": "<<factorial<<endl;


	return 0;
}





