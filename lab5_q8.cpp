//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variable
	char c;

	//ask for the character
	cout<<"Enetr the alphabet : ";

	//take the character
	cin>>c;

	//check and print whether the no. is vowel or not
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='U'||c=='I')
		cout<<"The character is a vowel";
	else
		cout<<"The character is a consonant";

	//terminate the program
	return 0;
}
