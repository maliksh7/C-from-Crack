#include <iostream>
using namespace std;

class A{
	protected:
		int no;
	public:
		void getno(int x){
			no = x;
		}	
};

class B:public A{
	public:
		void sqr(){
			cout << "Square of  "<<no<<" is " << (no*no);
			cout << endl;
		}
};

class C:public A{
	public:
		void cube(){
			cout << "Cube of "<<no <<" is " << (no*no*no);
			cout << endl;
		}
};

int main(){
	B bobj;
	C cobj;
	bobj.getno(3);
	bobj.sqr();
	cobj.getno(3);
	cobj.cube();
	return 0;
}
