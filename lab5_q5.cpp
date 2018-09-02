//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	int n;

	//ask for the no.
	cout<<"Enter the number : ";

	//take the no. as input
	cin>>n;

	//check and print whether the no. is even or odd
	if(n%2==0)
		cout<<"The number is even";
	else
		cout<<"The number is odd";

	//terminate the program
	return 0;
}
