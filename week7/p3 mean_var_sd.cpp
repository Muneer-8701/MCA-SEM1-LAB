#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	float arr[100];
	float *ptr;
	float sum=0,mean,variance = 0,sd;
	
	cout<<"Enter number of elements: ";
	cin>>n;
	
	cout<<"Enter" <<n<<" real numbers: ";
	
    for (int i=0;i<n;i++)
    {
    	cin >>arr[i];
    	
	}
	
	ptr =  arr;
	
	
    for (int i=0;i<n;i++)
    {
    	sum  = sum +* (ptr +i);
    	
	}	

    mean = sum/n;
	
    for (int i=0;i<n;i++)
    {
    	variance  = variance +(* (ptr +i)-mean)*(* (ptr +i)-mean);
	}

	variance =variance/n;
	
	sd = sqrt(variance);
	
	cout<<"\nSum = "<<sum;
	cout<<"\nMean = "<<sum;
	cout<<"\nStandard Deviation = "<<sd;
	
	return 0;

}

