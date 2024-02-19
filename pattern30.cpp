//5 4 3 2 1 0 1 2 3 4 5
//  4 3 2 1 0 1 2 3 4
//    3 2 1 0 1 2 3
//      2 1 0 1 2
//        1 0 1


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
return 0;
}
