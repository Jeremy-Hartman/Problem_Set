// Problem 19 - Solution



#include <iostream>

using namespace std;

int main()
{	
	int arr[3] = {};
	cout<<endl;
	cout<<"Enter First number: ";
	cin>>arr[0];
	cout<<"Enter Second number: ";
	cin>>arr[1];
	cout<<"Enter Third number: ";
	cin>>arr[2];

	int x = arr[0];
	int y = arr[1];
	int z = arr[2];
	cout<<"\n";
	cout<<"\n";

	cout<<"The permutations are:"<<endl;

	for(int i = 0; i < 3; i++) 			//first {x, y, z} output each iteration of loop
	{
		
		cout<<arr[i];

	}
	cout<<endl;
	cout<<x<<z<<y<<endl;
	cout<<y<<z<<x<<endl;
	cout<<y<<x<<z<<endl;
	cout<<z<<x<<y<<endl;
	cout<<z<<y<<x<<endl;
	cout<<"\n";

	return 0;
	
}





