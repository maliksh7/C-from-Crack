#include <iostream>
using namespace std;

class A{
	private:
		int a;
	public:
		void getval_a(int );
		int get_a();	
};
void A::getval_a(int x){
	a = x;
}
int A::get_a(){
	return a;
}


class B:public A{
	private:
		int b,c;
	public:
		void getval_b(int);
		void add();
		void dispval();	
};

void B::getval_b(int y){
	b = y;
}
void B::add(){
	c = get_a();
	c = c + b;
	cout << c << endl;
}
void B::dispval(){
	cout << "Value of a: " << get_a() << endl;
	cout << "Value of b: " << b << endl;
	cout << "Value of c: " << c << endl;
	
}
int main(){
	int a ,b;
	B obj;
	cout << "Enter Value for a: ";
	cin >> a;
	cout << "Enter Value for b: ";
	cin >> b;
	
	obj.getval_a(a);
	obj.getval_b(b);
	obj.add();
	obj.dispval();
	return 0;
}
