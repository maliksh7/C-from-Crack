#include <iostream>
using namespace std;
//operator overloading
class Distance
{
	private:
		double feets;
		double inches;
	public:
		
	Distance()
	{
		feets = 0;
		inches = 0;		
	}
	
	Distance(double x , double y)
	{
		feets = x;
		inches = y;
	}
	void set_data()
	{
		cin >> feets ;
		cin >> inches;
		
	}
	void display()
	{
		cout << "input feets: "<<feets <<endl;
		cout << "input inches: " << inches << endl;
	}
	bool operator <(const Distance &dl)
	{
		if (dl.feets < feets && dl.inches < inches)
		{
			return true;
		 } 
		 else
		 {
		 	return false;
		 }
	 }
	 Distance operator += (const Distance &dl) 
	 {
	 	Distance obj1;
	 	obj1.feets  = dl.feets + 1;
	 	obj1.inches = dl.inches + 1;
	 	return obj1;
	 }
	 Distance operator ++(int a)
	 {
	 	Distance temp;
	 	temp.feets  = feets++;
	 	temp.inches = inches++;
	 	return temp;
	 }
	 friend istream &operator >> (istream &in , Distance &obj3)
	 {
	 	in >> obj3.feets;
	 	in >> obj3.inches;
	 	return in;
	 }
	 friend ostream &operator << (ostream &out , const Distance & obj4)
	 {
	 	out << obj4.feets;
	 	out << obj4.inches;
	 	return out;
	 }
	 
};

int main()
{	
	Distance obj1(2.5,6.3);
	Distance obj2(4.5,2.5);
	cout << obj1 <<endl;
	cout << obj2 <<endl;
	
	return 0;
}
