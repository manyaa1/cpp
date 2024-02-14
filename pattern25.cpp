// C++ Program to print the flipped rotated triangle star
// (*) pattern
#include <iostream>
using namespace std;

void printRotatedTriangle(int n)
{
	
	for (int i = 1; i <= n; i++) {

	
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}

		
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		
		cout << endl;
	}

	
	for (int i = 1; i <= n - 1; i++) {

		
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}

		
		for (int k = 1; k <= n - i; k++) {
			cout << "*";
		}
		
		cout << endl;
	}
}

int main()
{

	int n = 5;
	
	printRotatedTriangle(n);
	return 0;
}
