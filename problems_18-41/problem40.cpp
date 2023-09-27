//Problem40 - Solution




#include <iostream>

using namespace std;

int main()
{
	int x;
	int temp = 0;	//tried this code with bool data type varable 
					//and could not get same results
	cout<<"Please enter a number: ";
	cin>>x;
	
	for(int i = 2; i<=x; ++i) // i=2 while i<=x increment i during iteration
	{
		temp = 0;			  //if first loop is true execute nested loop if it is true

		for(int j=2; j<=i/2; ++j) // j=2 j<=i/2, increment i (during iteration)
		{						  // this program works, but I'm unsure of how because by the time
								  // the condition for the nested loop is true(i=5) 
			if(i % j == 0)			  // this statement should return false because
			{						  // i and j are of int type and any decimal remainder should be negated
				temp = 1;			  // If You Can Please Explain In Class That Would Be Great!
				//cout<<" * " // to explain my above confusion run this with code
				break;	// break to show each individual prime number (somehow)
			}
		}
		if(temp == 0 && x!=1) // if both of these conditions are met 
		{
			cout<<i<<endl; // show each number that checked off (made true) previous condition i % j == 0
		}	
	}

	return 0;

}



