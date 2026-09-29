#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[100];
	int *p = arr;
	int sum = 0;
	
	cout<<"Enter number of elements: ";
	cin>>n;
	
	cout<<"Enter " << n <<" elements: " <<endl;
	
	for (int i=0; i<n;i++)
	{
		cin>>*p;
		p++;
	}
	
	p = arr;
	
	for (int i=0;i<n;i++)
	{
		sum = sum +*p;
		p++;
	}
	
	cout << "sum = "<<sum;
	return 0;
	
	
	
}
	
	
	
	
	
	
