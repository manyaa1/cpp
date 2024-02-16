
#include <iostream>
using namespace std;

int main()
{
	int i, j;

	int rows = 5;


	char character = 'A';

	// first for loop is used to identify number rows
	for (i = 0; i < rows; i++) {
	
	
		for (j = 0; j <= i; j++) {
		
		
			cout << character << " ";
		}
		cout << "\n";
	
		
		character++;
	}
	return 0;
}
