#include <iostream>
using namespace std;

int main(){

	int **dynamicArray = 0;
	int ROWS,COLUMNS;
	//memory allocated for elements of rows.
	
	cin >> ROWS;
	cin >> COLUMNS;
	dynamicArray = new int *[ROWS] ;
	
	//memory allocated for  elements of each column.
	
	
	for( int i = 0 ; i < ROWS ; i++ )
		dynamicArray[i] = new int[COLUMNS];
	
	//free the allocated memory
	
	
	for( int i = 0 ; i < ROWS ; i++ )
		delete [] dynamicArray[i] ;
		delete [] dynamicArray ;
	return 0;
}

