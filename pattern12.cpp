//1 
//0 0
//1 1 1
//0 0 0 0
//1 1 1 1 1
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    int no;
   
    while(i<=n){
    int j=1;
        
        while(j<=i){
            if(i%2==0)
            {no = 0;
            }
            else{no=1;
            }
            cout<<no<<" ";
            no= (!no);
            j++;

        }

        cout<<"\n";
        i++;
    }
   
return 0;


}
