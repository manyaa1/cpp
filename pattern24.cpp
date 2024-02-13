
//1 2 3 4 5 6
//7 8 9 10 11
//12 13 14 15
//16 17 18
//19 20
//21
// n=6
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no=1;

   
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
             
            //while(j<=no){
            //    cout<<no;
            //    j++;
            //}
            
            
            cout<<no<<" " ;
             no++;
            
            
        }
        cout<<endl;

    }
        
        return 0;
    }
