//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int n,t1=0,t2=1;

	//ask for ending value
	cout<<"Enter the ending value : ";

	//accept the value
	cin>>n;

	//create a loop to show the fibonacci series
	for(int i=1;i<n;i++)
	{
		 if(i == 1)
        	{
           		 cout << " " << t1;
            		continue;
      		}
       		if(i == 2)
        	{
            		cout << t2 << " ";
           		continue;
        	}
        	int nt = t1 + t2;
        	t1 = t2;
        	t2 = nt;
        
        	cout << nt << " ";
	}

	//terminate program
	return 0;
}
