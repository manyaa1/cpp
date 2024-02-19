#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
          int no=n;
        for(int j=1;j<=i;j++){
            
            cout<<no<<" ";
            no--;
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<"  ";
        }
         no=no+1;
        for(int j=1;j<=i;j++){
           
           cout<<no<<" ";
            no++;
        }
         cout<<endl;
    }
    for(int i=n+1;i<=2*n+1;i++){
        //if(i==n+1){
           // int num=n;
            //int j=1;
            //while(j<n+1){
            //    cout<<num;
            //    num--;
             //   j++;
       // }
       // }
        int no=n;
        for(int j=1;j<=2*(n+1)-i; j++){
            cout<<no<<" ";
            if(no==0)break;
            no--;
            }for(int j=1;j<=2*i-2*n-3 ;j++){
                cout<<"  ";
            }
            no=no+1;
            for(int j=1;j<=2*(n+1)-i ;j++){
                if(no>n)break;
                cout<<no<<" "; 
                no++;
            }

        cout<<endl;

    }
   



    return 0;

}
