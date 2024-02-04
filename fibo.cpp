#include<iostream>
using namespace std;
int main(){

    int n ,c;

    cout<<"Enter n";
    cin>>n;
    if(n==0 || n==1 ){ 
        cout<< n;
    }else{
        int a=0;
        int b=1;
        for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    }
     cout<< b<<endl;

    }
  
    
  
 return 0;
}
