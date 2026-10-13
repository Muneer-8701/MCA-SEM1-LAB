#include <stdio.h>

int factorial_recursive(int n)
{
	if(n==0 || n==1)
	return 1;
	
	return n*factorial_recursive(n-1); 
}

int factorial_nonrecursive(int n)
{
	int fact = 1;
	
	for (int i=1;i<=n;i++)
		fact = fact*i;
		
	return fact;
	
} 

int main()
{
	int n;
	printf("Enter anm integer: ");
	scanf("%d",&n);
	
	printf("Factorial using recursion = %d\n ",factorial_recursive(n));
	
	
	printf("Factorial using recursion = %d\n ",factorial_nonrecursive(n));
	
	return 0;
	
	
	
	
}















