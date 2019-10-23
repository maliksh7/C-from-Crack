#include <iostream>
using namespace std; 

int cal(int );
int cal(int ,int);

int main(){
	int s,a,b;
	cout<<"Enter a Number: "<<endl;
	cin>>s;
	cout<<"Square of "<<s<<" is "<<cal(s)<<"."<<endl;
	cout<<"Enter two Numbers: "<<endl;
	cin>>a>>b;
	cout<<"Addition of "<<a<<" and "<<b<<" is "<<cal(a,b)<<".";
	return 0;
}

int cal(int x){
	int sqr;
	sqr = x * x;
	return sqr;
}
int cal(int x ,int y){
	int sum;
	sum = x + y;
	return sum;
}
