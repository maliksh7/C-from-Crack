#include <iostream>
using namespace std;

template <class t>
t comp(t x, t y){
	if(x>y)
		return x;
	else
		return y;	
}

int main(){
	cout<<comp(2,3)<<endl;
	cout<<comp(4.5,5.9)<<endl;
	cout<<comp('s','d')<<endl;
}
