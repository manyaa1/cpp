#include<iostream>
using namespace std;
void sort(int arr[], int n){
	//int count =0;
	for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
	
        //i=-1;
		
	
	}
    //return arr;
    
}
int main() {
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//int res;
    sort(arr,n);
    //cout<<*res<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

	return 0;
}
