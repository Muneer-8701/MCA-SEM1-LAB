#include <iostream>
using namespace std;

int main() {
	int x=10;
	
	int *p = &x;
	
	cout<<" Original value = "<<x<<endl;
	(*p)++;
	cout<<"After increament "<<x<<endl;
	(*p)--;
	cout<<"Before increament "<<x<<endl;
	return 0 ;
	
}

