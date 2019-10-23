#include <iostream>
using namespace std;

class stu{
	protected:
		int roll;
	public:
		void get_roll(int);
		void put_roll();	
};
void stu :: get_roll(int a){
	roll = a;
}
void stu :: put_roll(){
	cout << "Roll number is: " << roll;
}
class test:public stu{
	protected:
		float m1,m2;
	public:
		void get_marks(float,float);
		void put_marks();	
};
void test :: get_marks(float x , float y){
	m1 = x;
	m2 = y;
}
void test :: put_marks(){
	cout <<"Subject 1 marks: "<<m1 <<endl;
	cout << "Subject 2 marks: "<<m2 <<endl;
}

class result:public test{
	int total;
	public:
		void display(){
			total = m1 + m2;
			put_roll() ;
			cout << endl;
			put_marks();
			cout << total ;
		}
};


int main(){
	
	result obj;
	obj.get_roll(123);
	obj.get_marks(54.5,90.5);
	obj.display();
	
	return 0;
	
}
