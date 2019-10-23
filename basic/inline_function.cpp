#include <iostream>
using namespace std;

inline int max(int x , int y){
	return ((x>y) ? x : y);
}
int main(){
	int a , b;
	cout<<"enter two no.s : "<<endl;
	cin>>a>>b;
	cout<<"Greater no. is : "<<max(a,b);
	return 0;
}
