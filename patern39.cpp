#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
        //int j=(2*n)-(2*(i+2))
        for(int j=2*(n/2)-2*(i-1);j>=1;j--){
           
           cout<<"  ";
        }
        int no=i;
        for(int j=1;j<=i;j++){
            cout<<no<<" ";
            no--;
                    }
         for(int j=1;j<=2*i-n/2;j++){
            cout<<"  ";
         } 
         
         for(int j=1;j<=i;j++){
            if(i==1)break;

            cout<<j<<" ";
         }          
                    cout<<endl;
    }
   for(int i=n/2+2;i<=n;i++){
    for(int j=1;j<=2*i-n-1;j++){
        cout<<"  ";
    }
    int no=n-i+1;
    for(int j=1;j<=n-i+1;j++){
        cout<<no<<" ";
        no--;

    }
    for(int j=1;j<=2*(n-i)-1;j++){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        if(i==n)break;
        cout<<j<<" ";
    }
    cout<<endl;
   }
    return 0;
}
