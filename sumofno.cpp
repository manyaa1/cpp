#include<iostream>
using namespace std;
int main(){

    int n;
    int i=1;
    int s=0;
    cout<< " Enter a positive integer " << endl;
    cin>> n;
      while( n>0){
        int d =n%10;
        s= s+d;
        n=n/10;
        }
    cout<<s<<endl;
    
     return 0;
    }




   
