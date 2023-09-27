//Problem 24 - Solution



#include<iostream>

using namespace std;

int main()
{
	int x;

	cout<<"Please enter number: ";
	cin>>x;

	
	if(x % 7 == 0) // if x mod 7 gives remainder equivalent to 0
	{
		cout<<"Number is multiple of 7"<<endl;
	}
	else // if x mod 7 gives remainder != 0
		cout<<"Number is not multiple of 7"<<endl;
	
	return 0;
}




