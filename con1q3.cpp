1       1
12     21
123   321
1234 4321
123454321
  #include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
        for(int j=1;j<=2*(n-1)-2*i+1;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            if(i==n && j==i) continue;
            cout<<j;
            
        }
		cout<<endl;
	}
	return 0;
}
