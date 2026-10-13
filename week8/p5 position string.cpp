#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string S,T;
	
	cout<<"Enter String S: ";
	getline(cin,S);
	
	cout<<"Enter String T: ";
	getline(cin,T);
	
	int position = S.find(T);
	
	if (position != string::npos)
	{
		cout<<"String  T begins at index: "<<position<<endl;
	}
	else
	{
			cout<<"String T not found.Output: "<<position<<endl;
	}
	
	return 0;
}
