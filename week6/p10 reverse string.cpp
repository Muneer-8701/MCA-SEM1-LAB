#include <iostream>
using namespace std;

int main()
{
	char str[100];
	
	cout <<"Enter a string: ";
	cin>>str;
	
	char *start = str;
	char *end = str;
	
	while (*end != '\0')
	{
		end++;
		
	}
	
	end--;
	
	cout<<"Reverse string: ";
	
	while (end>=start)
	{
		cout << *end;
		end--;
	}
	
	return 0;
	
 }
