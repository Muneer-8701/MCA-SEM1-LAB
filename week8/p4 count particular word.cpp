#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string sentence;
	string word;
	
	int count = 0;
	int position = 0;
	
	cout<<"Entetr a line of text: ";
	getline(cin,sentence);
	
	cout<<"Enter the word to count: ";
	cin>>word;
	
	while ((position = sentence.find(word,position))!=string::npos)
	{
		count++;
		
		position = position+word.length();
	}
	
	cout<<"The word occurs: "<<count<<"times."<<endl;
	
	return 0;
		
		
	
	
}
