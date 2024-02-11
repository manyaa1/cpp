//    1 
//   2 3
//  3 4 5
// 4 5 6 7
//5 6 7 8 9 


#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    
   
    while(i<=n){

        int k=1;
         while(k<=n-i){
            cout<<" ";
            k++;
         }
          int j=1;
    int no=i;
   
   
        
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
