//input dependent on the value of n entered by user
//123456
//12345*
//1234***
//123*****
//12*******
//1*********

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
        for(int j=1;j<=i-2;j++){
            if(i==1 || i==2)
            break;
            else{
             cout<<"*";
            }
           
            
        }
        cout<<endl;
	}
	return 0;
}
