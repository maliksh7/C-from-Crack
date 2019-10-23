#include <iostream>
using namespace std;

class test{
	int no;
	static int count;
	public:
		void setno(void);
		void dispno(void);
		static void dispcount(void);
};

void test::setno(void){
	no = count++;
}
void test::dispno(void){
	cout<<"Objest Number = "<<no<<endl;
}
void test::dispcount(){
	cout<<"Counter = "<<count<<endl;
}
int test::count;

int main(){
	test t1,t2;
	t1.setno();
	t2.setno();
	test::dispcount();
	test t3;
	t3.setno();
	test::dispcount();
	t1.dispno();
	t2.dispno();
	t3.dispno();
	return 0;
	
}
