#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin;
	//int c;
	fin.open("FH2read.txt");
	int arr[9],i =0;
	ofstream fout;
	fout.open("FH2write.txt");
	while(!fin.eof()){
		//cout << ch << endl;
		fin >> arr[i] ;
		i++;
	}
	
	
	//int a;
	//int arr[10],i =0;
	
	fout << "Numbers are: " << endl ;
	for(int i = 0; i<9; i++){
		fout << "Number is : " << arr[i] << endl;
	}
	
	fin.close();
	fout.close();
	return 0;
}
