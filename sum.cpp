#include<iostream>
using namespace std;
int main (){
    int marks;
  char grade ;
  cout<< "Enter your marks between 0-100";
  cin>> marks;

  if(marks>=91 && marks<=100){
    cout<<" Grade A"<<endl;
    grade='A';
  }
  else if( marks >= 81 && marks <=90){
    cout<<" Grade B"<<endl;
    grade='B';
  }
  else if(  marks>=71 && marks<=80){
    cout<<"Grade C"<<endl;
    grade='C';

  }
   else if(  marks>=61 && marks<=70){
    cout<<"Grade D"<<endl;
    grade ='D';

  }
    else {
    cout<<"Grade E"<<endl;
    grade='E';

  }
  switch(grade){
    case'A': cout<<"VERY GOOD "<<endl ; break;
    case'B': cout<<"GOOD"<<endl; break;
    case'C': cout<<"Average "<<endl; break;
    case'D': cout<<"Bad "<<endl; break;
    default:cout<< "very poor"<<endl;break;

  }

return 0;
}
