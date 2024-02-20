#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
              cout<<"*";

        }
        for(int j=1;j<=2*(i-1)-1;j++){
            cout<<" "; 
        }
        for(int j=n+1;j<=2*n-i+1;j++){
            if(j>=2*n)break;
            cout<<"*";
        }
        cout<<endl;
      
    }
    for(int i=n/2+2;i>=1;i--){
        for (int j=1 ;j<=2*(n/2+1)-i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*i-(n/2+1) ;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=2*(n/2+1)-i;j++)
        {
            if(i==1 && j>=2*(n/2+1)-i){
            break;
        }
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}
