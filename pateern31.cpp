#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
for(int i=1;i<=n;i++){
        int j=1;
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=n-i+1;j>=1;j--){
          cout<<j<<" ";
        }
       for(int j=1;j<=1;j++){
           cout<<"0 ";
        
 }
 for(int j=1;j<=n-i+1;j++){
    cout<<j<<" ";
 }
 
 cout<<endl;
 
  
}
for(int i=n+1;i<=2*n+1;i++){
    for(int j=1;j<=2*n-i+1;j++){
        cout<<"  ";
    }
    int j=1;
    //int no=i-n-1;
    for(int j=i-n-1;j>=1;j--){
        cout<<j<<" ";

    }
     for(int j=1;j<=1;j++){
           cout<<"0 ";
    
    for(int j=1;j<=i-n-1;j++){
        cout<<j<<" ";
    }

    cout<<endl;
    
}


}
return 0;
}
