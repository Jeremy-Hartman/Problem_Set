//Problem 14 - Solution

#include<iostream>

using namespace std;

int main()
{
	int chicken;
	int cow;
	int pig;
	int legs [3] = {2, 4, 4};

								

	//array for legs to access values below and make code more recycalable

	cout<<"please enter number of chickens: ";
	cin>> chicken;
	cout<<"please enter number of cows: ";
	cin>> cow;
	cout<<"please enter number of pigs: ";
	cin>> pig;

	cout<< "Total number of legs for the animals: " << (legs[0] * chicken) + (legs[1] * cow) + (legs[2] * pig) << endl;
	return 0;
}


