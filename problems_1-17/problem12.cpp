//Problem 12 - Solution

#include<iostream>
using namespace std;

int main() {
	float F;
	float C;

	cout<<"enter the tempurature in fahrenheit\n";
	cin>> F;
	C = 5 * (F - 32) / 9;
	cout<<"the fahrenheit tempurature of " << F << " is " << C <<" degrees centigrade\n";

	return 0;

}

