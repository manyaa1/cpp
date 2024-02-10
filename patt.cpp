//output 
//1 
//2 3 
//4 5 6 
//7 8 9 10
//Making two loops one for rows -i and one for column -j . 
// Taking a variable no and initiliasing it with 1 and putting it on console inside the second-j loop and after that incrementing it bu unary operator.

#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    int no=1;
    while(i<=n){
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
