#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
             cout<<"  ";

        }
        int no=i;
        for(int j=1;j<=i;j++){
            cout <<no<<" ";
			no++;
		}
        no = no - 2;
        for (int j = 1; j <= i - 1; j++) {
			cout <<no<<" ";
			no--;
		}
         cout<<endl;
}

return 0;
         

}
