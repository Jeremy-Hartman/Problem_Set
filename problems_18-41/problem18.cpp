//Problem 18 - Solution


#include <iostream>

using namespace std;

int main()
{

    int x, y;
	int result = 1;

	cout<<"base: ";
    cin>>x;
    cout<<"exponent: ";
    cin>>y;
	for(int i = 0; i < y; ++i)      //if i < y, increment i by one
	{
    	result *= x; 				//if above statement true result = result * x
	}

	cout <<"The result of "<<x<<" raised the power of "<<y<<": "<<result<<endl;

	return 0;
}




