#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fout;
	
	fout.open("FH1.txt");
	
	fout<<"My first on file code...Hello World!" << endl;
	fout << "Numbers from 1 to 10 are: " << endl ;
	for(int i = 0;  i < 10;  i++){
		fout << "Number is : " << i << endl ;
	}
	fout.close();
	
	return 0;
	
}
