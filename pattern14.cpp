//    1
//   23
//  345
// 4567
//56789
//keeping two loops one for spaces and one for numbers 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    
   
    while(i<=n){
     //for printing spaces
        int k=1;
         while(k<=n-i){
            cout<<" ";
            k++;
         }
      int j=1;
    int no=i;
   
   
        
        while(j<=i){
            
            cout<<no;
            no++; //incrementing number variable for every next iteration
            j++;

        }

        cout<<"\n";
        i++;
    }
   
return 0;


}
