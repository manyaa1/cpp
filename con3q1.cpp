#include<iostream>
using namespace std;
int gcd(int a,int b){
		int c= min(a, b );
		int d= max(a,b);
		if(d%c==0){
            cout<<c;
			return 1;
		}else{
			for(int i=c-1 ;i>=1 ;i--){
				if(d%i==0 && c%i==0){
                    cout<<i;
					return 1;
				}

			}
		}
		return 0;
	}
int main() {
	int n1;
	int n2;
	cin>>n1;
	cin>>n2;
	gcd(n1,n2);
	
	 
	return 0;
}
