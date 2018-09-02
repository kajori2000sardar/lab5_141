//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int n,p=0;

	//ask for input
	cout<<"Enter the number to check whether it's prime or not : ";

	//take the no. as input
	cin>>n;

	//check whether the no. is prime or not
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			p=1;
	}
	
	//show the result
	if(p=0)
		cout<<"The number is prime";
	else
		cout<<"The number is not prime";

	//terminate the program
	return 0;
}
			
