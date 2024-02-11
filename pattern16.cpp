 //   1
//   232
//  34543
// 4567654
//567898765

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
    int no=i;
    int j=1;
    int l=1;
   
   
        
        while(j<=i){
            
            cout<<no;
            no++;
            j++;

        }
        
         no= no-2;
        while(l<=i-1){
           
            cout<< no;
          no--;
            l++;
        }

        cout<<"\n";
        i++;
    }
   
return 0;


}
