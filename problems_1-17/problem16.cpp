//Problem 16 - Solution

#include<iostream>
#include<cmath> //included cmath library for pow() function

using namespace std;

int main() 
{
	float a;
	float b;
	float answer;

	cout<<"Please enter first number: \n";
	cin>> a;

	cout<<"Please enter second number: \n";
	cin>> b;		

	answer = pow(a, 3) + pow(b, 3) + (3 * pow(a,2) * b) + (3 * a * pow(b, 2));

	cout<< "Result: "<< answer<< endl;

	return 0;

}

