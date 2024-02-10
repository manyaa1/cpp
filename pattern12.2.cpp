//1 
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    int no;
   
    while(i<=n){
    int j=1;
    if(i%2==0) //another way starts here . If the number of row is even 0 is assigned else 1 is assigned to the variable no
        {no = 0;
        }
        else{no=1;
            }
        
        while(j<=i){
            
            cout<<no<<" ";
            no= (!no);
            j++;

        }

        cout<<"\n";
        i++;
    }
   
return 0;


}
