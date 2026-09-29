
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d,root1,root2;
	
	cout<<"Enter a b c: ";
	cin >> a>>b>>c;
	
	d=b*b-4*a*c;
	
	if (d > 0) 
	{
		root1 = (-b + sqrt(d)) / (2 *  a);
		root2 = (-b - sqrt(d))/(2 * a);
		cout<<"Roots"<<root1<<root2 <<endl;
	}
	else if (d==0){
		root1 = -b/(2*a);
		
	}
	else {
		cout<<"Roots are imaginary.";
		
	}
 return 0		
}
	
