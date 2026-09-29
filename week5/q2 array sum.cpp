#include <iostream>
using namespace std;

int main() {
	int n;
	int sum=0;
	
	cout<<"Enter a number of elements: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter "<< n << " elements ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	for (int i=0;i<n;i++) 
	{
		sum=sum + arr[i];
		
	}
	
	cout<< "Sum of array elements = " << sum;
	
	return 0;
	
}
