//Problem41 - Solution



#include <iostream>

using namespace std;

int main()
{
int x;
int counter = 1; // start at one to start format at "Please enter number 1: "
float result = 0;

cout<<"Please enter number "<<counter<<": ";
cin>>x;

while(x >= 0)   //serves two purposes: 1) to execute code 2) to not excute and return 0 if negative number
{
	result += x; //result = result + x
	counter++;   //increment counter by 1

	cout<<"Please enter number "<<counter<<": ";
	cin>>x;

}

result/=counter-1; // to continue output at "Please enter number 2: " and so on.

cout<<result<<endl; 

return 0;

}



