//12345
//1234*
//123**
//12***
//1****


#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j;
		}
        for(int j=1; j<=i-1;j++){
            if(i==1) break;
            cout<<"*";
        }
        cout<<endl;
	}
	return 0;
}
