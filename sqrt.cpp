#include<iostream>
#include<cmath>
using namespace std;
int main(){

    double n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    float i=0;

    for(i=0; i*i<=n;i++);
    i = i -1;

    for(;i*i<=n;i=i+0.1);
    i = i-0.1;
    
    for(;i*i<=n;i=i+0.01);     
    i = i-0.01;
    
    cout<<"Sqaure Root of given number is"<<i<<endl;
           
           
           return 0;

    }



  
