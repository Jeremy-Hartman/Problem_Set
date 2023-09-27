//Problem 15 - Solution

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float var1;
	float var2;
	float answer;

	cout<<"Please enter first number: ";
	cin>>var1;
	cout<<"Please enter second number: ";
	cin>> var2;

	answer = (sqrt(var1+var2));					//sqrt() function lies within cmath library

	cout<<"Square root of " << var1 << " + " << var2 << " is "<< answer << endl;

	return 0;
}

