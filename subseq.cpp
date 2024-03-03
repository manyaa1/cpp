#include<iostream>
#include<cmath>
using namespace std;
void generatesubsequences (int arr[], int n){
    for(int i=0;i<pow(2,n);i++){
        cout<<i<<":";
        for(int j=0;j<n;j++){

            int mask =(1<<j);
            
            if((i& mask)!=0){
                
                cout<<arr[j]<<" ";
            }
            //cout<<endl;


    }
       cout<<endl;

   }

};
int main(){
    //int i=0;
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(int);
    generatesubsequences(arr,n);
    
    return 0;
}
