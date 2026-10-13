#include <stdio.h>

void hanoi_recursive(int n,char source,char auxiliary,char destination)
{
	if(n==1)
	{
		printf("Move disk 1 from %c to %c\n",source,destination);
		return;
	}
	
	hanoi_recursive(n-1,source,destination,auxiliary);
	
	printf("Move disk %d from %c to %c\n",n,source,destination);
		
	hanoi_recursive(n-1,auxiliary,source,destination);
	

	
} 

int main()
{
	int n;
	printf("Enter number of disks:  ");
	scanf("%d",&n);
	
	printf("\nRecursive Tower of Hanoi: \n");
	
	hanoi_recursive(n,'A','B','C');
	
	return 0;
	
	
	
	
}















