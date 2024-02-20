#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i=1;i<=n/2+1;i++){
       
            for(int j=1;j<=n/2-i+2;j++){
                cout<<"*";
            }
            cout<<endl;
           // for(int j=1;j<=;j++){

            //}
            
        }
        for(int i=n/2+1;i>=1;i--){
            for(int j=n/2-i+2;j>=1;j--){
                cout<<"*";

            }
             cout<<endl;
        }
        
return 0;
}
