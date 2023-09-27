//Problem 27 - Solution



#include <iostream>

using namespace std;

int main()
{
	int x;
	cout<<"How many rows? : ";
	cin>>x;

	for(int i = 1; i<=x; i++)		// 1a. initialize i = 1, while i<= x, increment i by 1 (after each iteration)
	{								// 1a. while true cout<<endl;
		for(int j = i; j<=x; j++)  // 1b. initialize j = i, while j<=x, increment j by 1 (after each iteration)
		{
			cout<<" ";			   // 1b. while true cout " " (space)
		}

		for(int k = 1; k<=i; k++)  // 1c. initialize k = 1, while k<=i, increment k by 1 (after each iteration)
		{
			cout<<"*";			   // 1c. while true cout "*" (star)
		}

	cout<<endl;
	}
	return 0;
}



