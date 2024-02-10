//1 
//0 1 
//0 1 0 
//1 0 1 0
//1 0 1 0 1
// fori=even no of rows the first input is '0' and odd rows its 1
  #include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    int no=1;
   
    while(i<=n){
    int j=1;
        
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
