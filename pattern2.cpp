
#include <iostream>
using namespace std;

void part2(int n)
{
	
	int i, j, k = n;



	for (i = 1; i <= n; i++) {

		//for columns
		for (j = 1; j <= n; j++) {

			// Condition to print star pattern
			if (j >= k)
				cout << "* ";
			else
				cout << " ";
		}
		k--;
		cout << "\n";
	}
}


int main()
{
	int n = 5;
	// Function Call
	part2(n);
	return 0;
}
