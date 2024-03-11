#include<iostream>
using namespace std;
void targetsumpair(int arr[],int n,int t){
    //int cnt=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            //for(int k=0;k<n;k++){
               // cout<<"(" <<i<<","<<j<<")";
                int sum = arr[i]+arr[j];
                if(sum==t){
                    if (arr[i]< arr[j]){
                         cout<<arr[i]<<" and "<<arr[j]<<endl;
                    }
                    else{
                         cout<<arr[j]<<" and "<<arr[i]<<endl;
                    }
                   
                    
                }


            //}
        }
        //cout<<endl;
    }
    //return 0;

}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //cin>>arr[];
    //cout<<"t";
    int t;
    cin>>t;
    targetsumpair(arr,n,t);
   //cout<<res<<endl;

    return 0;
}
