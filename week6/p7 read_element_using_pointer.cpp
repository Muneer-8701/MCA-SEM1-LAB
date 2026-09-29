#include <iostream>
using namespace std;

int main() 
{
	int arr[5];
	int *p = arr;
	
	cout<<"Enter 5 elements: "<<endl;
	
	for(int i=0;i<5;i++){
		
		cin>> *p;
		p++;
		
		
	}
	
	
	cout<<"Array elements are: "<<endl;
	
	for(int i=0;i<5;i++){
		
		cout<<arr[i]<< " ";
		p++;
		
}
return 0;
	
	}
