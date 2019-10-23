#include <iostream>
using namespace std;

//such class is know as Abstract Class that contains atleast one Pure Virtual Function

class B{
	public:
		virtual void disp() = 0; //functions defination will we declare in derived class
};

class D:public B{
	public:
		void disp(){
			cout << "Pure Virtual Function";  //if Pure Virtual Function not defined here , then derived class will also be a "PVC"
		}
};

int main(){
	//B obj;  //invalid -> [Error] cannot declare variable 'obj' to be of abstract type 'B'
	D obj;
	obj.disp();
	
	// OR
	
//  cout << endl ;	
//	B *p;   //valid -> we can declare pointer of abstract class but not object
//	D obj;
//	p = & obj;
//	p -> disp();
	
	return 0;
}
