#include <iostream>
#include<string>
using namespace std;

int main()

{
	string sentence;
	string oldString;
	string newString;
	
	cout<<"Enter a sentence: ";
	getline (cin,sentence);
	
	cout<<"Enter a string to find: ";
	getline(cin,oldString);
	
	cout<<"Enter replacement string: ";
	getline(cin,newString);
	
	int position = sentence.find(oldString);
	if(position != string::npos)
	{
		sentence.replace(position,oldString.length(),newString);
	
	cout<<"String after replacement: "<<sentence<<endl;
	
    }
    
    else
	{
     cout<<"String not found"<<endl;	
	}
}
