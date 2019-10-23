#include <iostream>
using namespace std;

int main(){
	int a[3][3] , i , j , sum =0 ;
	cout<<"Enter Nine4 Numbers: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>a[i][j];
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<a[i][j]<<endl;
			sum = sum + a[i][j];
			
		}
		cout<<"Total: "<<sum<<endl;
		sum = 0;
	}
	
	return 0;
}
