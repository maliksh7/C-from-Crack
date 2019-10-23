#include <iostream>
using namespace std;

int add(int,int);

int main(){
	int a , b;
	
	cout<<"Enter 1st Number: "<<endl;
	cin>>a;
	
	cout<<"Enter 2nd Number: "<<endl;
	cin>>b;
	
	cout<<add(a,b);
}

int add(int x , int y){
	int c;
	c = x + y;
	return c;
}
