#include <iostream>
using namespace std;

class pntr_obj 
{
	int roll_no;
	string name;
	
public: 

	void set_data(int roll_no,string name)
	{
	   this->roll_no = roll_no;
	   this->name  = name;
	}
	
	void print()
	{
		cout<<"Object address: "<<this <<endl;
        cout<<"Roll no : "<<this->roll_no<<endl;
        cout<<"Name : "<<this->name<<endl;
        
        cout<<"---------"<<endl;
        
    }
};

int main()
{
	pntr_obj obj1,obj2,obj3;
	
	obj1.set_data(101,"ahmad");
	obj2.set_data(102,"Rahul");
	obj3.set_data(103,"jaun");	
	
	obj1.print();
	obj2.print();
	obj3.print();

 return 0;	
}






        
        
	
