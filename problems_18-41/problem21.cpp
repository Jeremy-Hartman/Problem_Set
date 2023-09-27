//Problem 21 - Solution



#include<iostream>

using namespace std;

int main()
{
	int x;

	cout<<"Please enter number: ";
	cin>>x;

	cout<<"Counting up"<<endl;

	for(int i = 1; i<=x; i++)	//initialize i = 1 if i is less than or equal to x, increment i by 1
	{
		cout<<"Counter is "<<i<<" of "<<x<<endl; // if above statement is true, cout<<"Counter is "<<i<<" of "<<x<<endl;
	}
	cout<<endl;

	return 0;
}




