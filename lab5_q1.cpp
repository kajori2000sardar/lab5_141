//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//defining variables
	int a,b,n;

	//ask for input
	cout<<"Enter two numbers : ";

	//take input
	cin>>a>>b;

	//check which no. is greater
	if(a>b)
		n=a;
	else
		n=b;

	//show output
	cout<<"Greater no. out of "<<a<<" and "<<b<<" is "<<n;

	//close program
	return 0;
}
