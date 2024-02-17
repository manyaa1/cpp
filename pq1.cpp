//output :1 for 16
//output: 4 for 15
#include<iostream>
#include<cmath>
 using namespace std;
 int main(){
    int n=16;
    int cnt=0;//count variable
    
    //loop for ceil value for 
    for(int k=0;k<ceil(log2(n+1));k++){
        if((n>>k)& 1==1){
            cnt++;
        }
    }
    cout<< cnt <<endl;

 }
