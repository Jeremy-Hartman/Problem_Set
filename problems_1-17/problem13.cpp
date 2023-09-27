//Problem 13 - Solution

#include<iostream>


using namespace std;

int main() {
	float C;
	float answer;

	cout<<"Please enter tempurature in Celsius: \n";
	cin>> C;

	answer = ((C * 9) / 5) + 32;

	cout<<"tempurature " << C << "C is " << answer << "-degrees Fahrenheit \n";

	return 0;


}

