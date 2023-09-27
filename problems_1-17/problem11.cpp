//Problem 11 - Solution

#include<iostream>


using namespace std;

int main()
{
	float hours;
	float answer;

	cout<<"Please enter hours: \n";
	cin>> hours;

	answer = (hours * 60) * 60;

	cout<<"Time in seconds: " << answer << endl;

	return 0;
}

