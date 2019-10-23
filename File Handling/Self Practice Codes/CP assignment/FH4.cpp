#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin;
	fin.open("input.txt");
	int arr[8] , sum = 0;
	
	
	ofstream fout;
	fout.open("output.txt");
//	getline(fin,arr[8]);
	for(int i = 0; i<8; i++){
		fin >> arr[i];
		sum = sum + arr[i];
	
	//	cout << sum << endl;
	}
	cout << sum << endl;
	fout << sum << endl;
	string line ;
	int arr1[7] , total = 0;
	
	while(getline(fin,line)){
		cout << line << endl;
		
	
		for(int i = 0; i<7; i++){
			fin >> arr1[i];
			if(line == '+')
				total = total + line;
			if(line == '-')
				total = total - line;	
		}
	fout << total;
	}

	
	
	
	
	
	
	
	fin.close();
	fout.close();
}
