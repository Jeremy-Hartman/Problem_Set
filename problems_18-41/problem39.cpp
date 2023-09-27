// Problem 39 - Solution



#include <iostream>

using namespace std;

int main()
{
	int x;
	bool prime = true;

	cout<<"Please enter number: ";
	cin>>x;

	if(x == 0 || x ==1)
	{
		prime=false;
	}

	for(int i = 2; i<=x/2 ; ++i)
	{
		if (x % i == 0)
		{
			prime = false;
			break;
		}
	}


	if (prime)
	{
		cout<<"The number is a prime"<<endl;
	}
	else
	{
		cout<<"The number is not a prime"<<endl;
	}


	return 0;
}




