//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declaration of variables
	int n,sum=0;

	//ask for input
	cout<<"Enter the ending number : ";

	//take number as input
	cin>>n;

	//check and show output
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{       int div = i % j;
			if (div == 0)
				sum+=j;
		}
		if(i==sum)
			cout<<"The number "<<i<<" is perfect number";
	}

	//terminate program
	return 0;
}
