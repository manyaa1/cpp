#include <iostream>
using namespace std;
int main(){
	int n=5; 
	for (int i=1 ;i <=n ; i++){
		for(int j=n-1;j<=1;j--){
			cout<<" ";

		}
		for(int k=1 ; k<=i; k++){
			cout<<k;
		}
		cout<<"\n";
	}

return 0;
}
//1
//12
//123
//1234
//12345
