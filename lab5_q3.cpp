//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declaring variables
	signed int i;

	//ask for value
	cout<<"Enter a number: ";

	//take input
	cin>>i;

	//check whether the no. is -ve, +ve, 0 and show output;
	if(i>0)
		cout<<"Number is positive";
	else
		if(i<0)
			cout<<"Number is negative";
		else
			cout<<"Number is equal to zero";

	//close program
	return 0;
}
