#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin;
	ofstream fout;
	fin.open("FH3.txt");
	int arr[10] , i = 0;
	cout << "Numbers Present in file FH3 are: " ;

	while(!fin.eof()){
		fin >> i;
		cout << i << " ";	
		i++;
	}
	
	

	
	fin.close();
	return 0;
}
