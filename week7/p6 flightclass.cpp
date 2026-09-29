#include <iostream>
using namespace std;

class Flight

{
	int flight_number;
	string source;
	string destination;
	float fare;


public:
	
	void setData(int fn,string s,string d,float f)
	{
		this->flight_number = fn;
		this->source = s;
		this->destination = d;
		this-> fare =f;
	}
	
	void display()
	{
		cout << "Flight Number: "<< this->flight_number << endl;
		cout << "Source: "<< this->source << endl;
		cout << "Destination: "<< this->destination << endl;
		cout << "Fare: "<< this->fare << endl;
	}
	
};

int main()
{
	Flight f1;
	
	f1.setData(101,"Delhi","Mumbai",5500);
	
	f1.display();
	
	return 0;
}
