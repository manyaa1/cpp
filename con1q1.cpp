//      1
//    2 3 2
//  3 4 5 4 3
//4 5 6 7 6 5 4
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=n-i;j>=1;j--){
			cout<<"  ";
		}
        int no=i;
		for(int j=1;j<=i;j++){
			cout<< no<<" ";
			no++;
		}
		
		for(int j=1;j<=i-1;j++){
			cout<<no-2<<" ";
			no--;
		}
		cout<<endl;

	}

	return 0;
}
