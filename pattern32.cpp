#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
          int no=n;
        for(int j=1;j<=i;j++){
            
            cout<<no<<"";
            no--;
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<" ";
        }
         no=no+1;
        for(int j=1;j<=i;j++){
           
           cout<<no<<"";
            no++;
        }
         cout<<endl;
    }
    for(int i=n+1;i<=2*n+1;i++){

    }
   



    return 0;

}
