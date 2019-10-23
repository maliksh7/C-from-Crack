#include <iostream>
using namespace std;

class add{
	int a,b,t;
	public:
		void getdata(void);
		void putdata(void);
		
};

void add::getdata(void){
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
}
void add::putdata(void){
	t = a + b;
	cout<<"Addition of "<<a<<" and "<<b<<" = "<<t;
}

int main(){
	add obj;
	obj.getdata();
	obj.putdata();
	
	return 0;
}
