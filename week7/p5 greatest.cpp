#include<iostream>
using namespace std;

class Greatest 
{
	int a,b;

public:
	
	void setData(int x,int y)
	{
		this->a=x;
		this->b=y;
	}
	
	int getGreatest()
	{
		if(this->a > this-> b)
			return this->a;
		else
			return this->b;
	
	
	}
	
};

int main()
{
	Greatest obj;
	
	obj.setData (25,40);
	
	cout<<"Greatest Number = "<<obj.getGreatest();
	
	return 0;
}







