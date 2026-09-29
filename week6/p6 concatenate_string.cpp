#include <iostream>
using namespace std;

int main() {
	char str1[] = "Hello ";
	char str2[] = "World";
	
	char *p1 = str1;
	char *p2 = str2;
	
	while (*p1 != '\0')
	{
	 p1++;
    }
    while (*p2!='\0')
     {
     *p1 = *p2;
     p1++;
     p2++;
     }
     
     *p1 ='\0';
     
     cout<< "Concatenated String: "<<str1;
	 
	return 0;
}
	
	
	
	
