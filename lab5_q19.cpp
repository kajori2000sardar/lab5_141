//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int p,c,b,m,cs,per;

	//ask for the marks of five subjects
	cout<<"Enter the marks of five subjects";

	//take the marks of the five subjects as input
	cin>>p>>c>>m>>cs>>b;

	//calculate the percentage of the provided marks
	per=(p+c+m+b+cs)/500*100;

	//show the grade according to the percentage
	if(per>=90)
		cout<<"Grade is A ";
	else 
		if(per>=80)
			cout<<"Grade is B ";
		else 	
			if(per>=70)
				cout<<"Grade is C";
			else
				if(per>=60)
					cout<<"Grade is D";
				else
					if(per>=40)
						cout<<"Grade is E";
					else
						cout<<"Grade is F";	

	//terminate the program
	return 0;
}
