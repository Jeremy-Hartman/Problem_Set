//Problem 37 - Solution



#include <iostream>

using namespace std;

int main()
{
	int x, remainder, result = 0;

	cout<<"Please enter a number ";
	cin>>x;


	while(x != 0)	//while x is not equal to 0, x%10
	{
		remainder = x % 10;
		result = result * 10 + remainder; //first iteration will give us the ones decimal place value
		x/=10; 							  //divide by 10 to move decimal left one place						  
										  //second iteration will give us the tens decimal place value and so on.
	}									  //also helps to think of e notation xe1, xe2, xe3, etc. 
										  //consider using a different variable than lowercase char (i.e, N, Num)
	cout<<result<<endl;					  //output will reverse x stored integer value
	return 0;
}



