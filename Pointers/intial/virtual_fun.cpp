#include <iostream>
using namespace std;

class base{
	public:
		void disp(void){
			cout << "Base Class disp" << endl;
		}
		virtual void show(void){
			cout << "Base Class show" << endl;
		}
};
class drived:public base{
	
		void disp(void){
			cout << "Derived class disp" << endl;
		}
		void show(void){
			cout << "Drived class show" << endl;
		}
};
int main(){
	base *p;
	base objb;
	drived objd;
	p = & objb;
	p -> disp();
	p -> show();
	p = & objd;
	p -> disp();
	p -> show();
	return 0;
	
	
}
