//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	float i,j,k;

	//ask for the angles
	cout<<"Enter the angles of the triangles";

	//take the angles as input
	cin>>i>>j>>k;

	//check and print whether the given angles can be used to create a triangle
	if(i+j+k==180)
		cout<<"The given angles can form a triangle";
	else 
		cout<<"The given angles acnnot form a triangle";

	//terminate the program
	return 0;
}
