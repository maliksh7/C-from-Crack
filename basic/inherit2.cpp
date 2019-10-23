#include <iostream>
using namespace std ;

class person{
	
};

class employee:public person{
	public:	
	virtual	void print(){
			cout << "class employee print";
		}
};

class company: public employee , public project{
		public:	
			void print(){
			cout << "class company print";
		}
};

class project : public employee,public company{
	public:
		void print(){
		cout << "class project print";
		}
};
 
void fun_ply(Company *p){
	p -> print();
}
int main(){
	company *p;
	fun_ply(p)
	
	return 0;
}
