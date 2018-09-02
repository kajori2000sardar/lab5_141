//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	int n,sum=0;

	//ask for no.
	cout<<"Enter the number whose sum of digits you want to find : ";

	//take the input
	cin>>n;

	//make a for loop to add the digits of the input no.
	while(n)
		sum+=(n%10);

	//print the sum of the digits of the input no.
	cout<<"The sum of the digits oif "<<n<<" is "<<sum;

	//terminate the program
	return 0;
}
