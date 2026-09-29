#include <iostream>
#include<string>
using namespace std;

string insertString(string str,string sub,int position)

{
	str.insert(position,sub);
	return str;
}


string deleteString(string str,int position,int n)

{
	str.erase(position,n);
	return str;
}

int main()

{
	string str,sub;
	int position, n;
	
	cout<<"Enter main string: ";
	getline (cin,str);
	
	cout<<"Enter a substring to insert: ";
	getline(cin,sub);
	
	cout<<"Enter position for insertion: ";
    cin>>position;
    
	str = insertString (str,sub,position);
	
	cout<<"string after insertion: "<<str<<endl;
	
	cout<<"\n Enter position for deletion";
	cin>>position;
	
	cout<<"\n Enter number of character to delete: ";
	cin>>n;
	
	str = deleteString(str,position,n);
	
	cout<<"String after deletion: "<<str<<endl;
	return 0;









	

}



