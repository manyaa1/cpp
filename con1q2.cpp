//1
//22
//303
//4004
//50005
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i){
             cout<<i;
			}
			else
			{
            cout<<0;
			}
			
		}
       
		cout<<endl;

	}

	return 0;
}
