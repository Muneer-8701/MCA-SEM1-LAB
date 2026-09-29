#include<iostream>
using namespace std;

class Student
{
	int roll_no;
	string name;

public:
	
	void setData (int r,string n)
	{
		this->roll_no = r;
		this->name = n;
	}
	
	Student *getPointer ()
	{
	 return this;	
	}
	
	void display()
	{
	 cout << "Roll No: "<<this->roll_no << endl;
    cout << "Name: "<<this->name << endl;	 
	}
    
};

int main()
{
	Student s1;
	
	s1.setData(101,"Rahul");
	
	Student *ptr;
	
	ptr = s1.getPointer();
	
	ptr->display();
	
	return 0;
}
