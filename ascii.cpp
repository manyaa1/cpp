#include<iostream>
using namespace std;
int main(){
  
  //output: tells number of total upper case , lower case, digits, whitespaces or special characters and breaks when $ <dollar> is input
  
    char ch;
    cout<< "enter a character";
     int scount =0;
      int ucount=0;
       int lcount=0;
        int dcount=0;
         int wcount =0;
    
    while( true){
     ch=cin.get();

     if(ch=='$'){
        break;
     }
    
   
    if( (int)ch>=65 && (int)ch<=90){//if( (int)ch>=65 && (int)ch<=90).... no need to type cast
   
    ucount++;
        
    }
    if( ch>= 97 && ch<= 122){
       
       
        lcount++;
       
    }
    if( ch>=48 && ch<=57){
      

      
         dcount++;
        


    }
   if( ch =" " || ch == '\n '|| ch=='\t'){
       
        wcount++;
       



    }
    else{
       
       
        scount++;
        

    }
}
 cout<< "White spaces "<< wcount<<endl;
cout<< "No of Digit are "<< dcount<<endl;
  cout<< "Lower Case Letters are"<< lcount<<endl;
  cout<< "Special Case Characters"<< scount<<endl;
  cout<< "Upper Case Letters are"<<ucount<<endl;
    
    
    return 0;
}
//output: tells number of total upper case , lower case, digits, whitespaces or special characters and breaks when $ <dollar> is input
