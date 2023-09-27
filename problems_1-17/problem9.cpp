//Problem 9 - Solution

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float width;
	float height;
	float radius;
	float diagonal;


	cout<<"please enter width of rectangle: ";
	cin>>width;

	cout<<"please enter the height of rectangle: ";
	cin>>height;

	cout<<"please enter radius of the circle: ";
	cin>> radius;

	cout<<"The rectangle fits inside the circle: ";   //diagonal or hypotenuse of rectangle 
	diagonal = pow(width, 2) + pow(height,2);		 // decides whether circle will fit	

	bool check = (sqrt(diagonal)<=radius*2);


	if (check == 1)
		{
			cout<<"true\n";
		}
	else
		{
			cout<<"false\n";
		}

	return 0;
}


