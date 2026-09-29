#include <iostream>
 using namespace std;
 
 int main()
 {
 	char ch;
 	int ascii,category;
 	
 	cout<<"Enter a character: ";
 	cin >> ch;
 	
 	ascii = ch;
 	
 	if (ascii>= 65 && ascii<=90)
 		category=1;
 	else if (ascii>= 97 && ascii<=122)
 		category=2;
 	else if (ascii>= 48 && ascii<=57)
 		category=3;
 	else 
 	category=4;
 	
switch(category)
{
	case1:
		cout<<"Capital Letter";
		break;
	case2:
		cout<<"Small letter";
		break;
	case3:
		cout<<"Digit";
		break;
	case4:
		cout<<"Special";
		break;
		
		
		
}
      
 return 0;

 }
