//1 
//2 3
//3 4 5
//4 5 6 7
//5 6 7 8 9
//maintaing a varibale no and initilaising it with i for every ith row and  printining it j<=i times by incrementing in every iteration

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    
   
    while(i<=n){
    int no=i;
    int j=1;
   
        
        while(j<=i){
            
            cout<<no<<" ";
            no++;
            j++;

        }

        cout<<"\n";
        i++;
    }
   
return 0;


}
