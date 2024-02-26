#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int rem;
	int arr[32]={0};
	int i=0;
    int oddSum=0;
    int evenSum=0;
	while( n >0 && i<32)
	{
		rem =n%10;
		arr[i]=rem;
		n=n/10;
		i++;

	}
	if(i%2==0){
		 for(int j=i-2;j>=0;j-=2){
               oddSum+=arr[j];
               }
	        cout<<oddSum<<endl;
	for(int j=i-1;j>=0;j-=2){
	            evenSum+=arr[j];
	            }
	         cout<<evenSum<<endl;
	}
else{

	     for(int j=i-1;j>=0;j-=2){
	     evenSum+=arr[j];
	     }
	     cout<<evenSum<<endl;
		 		for(int j=i-2;j>=0;j-=2){
               oddSum+=arr[j];
               }
        cout<<oddSum<<endl;
   
	}
return 0;
}
