int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
       
    for(int j=1;j<=n/2+1;j++){
        
        if(j==1||j==n/2+1||i==n/2+1)cout<<"*";
        else{
            cout<<" ";
        }
    }
    for(int j=1;j<=n/2;j++){
        if(i==1||i==n/2+1)
        cout<<"*";
    }

        
        cout<<endl;
       

    }

    for(int i=n/2+2;i<=n;i++){
         for(int j=1;j<=n/2+1;j++){
         if(i==n||j==n/2+1)cout<<"*";
         else{ cout<<" ";}

       }
       for(int j=1;j<=n/2;j++)   {
        if(j==n/2)cout<<"*";
        else{
            cout<<" ";
        }
       }    cout<<endl;
     }
   
    return 0;
}
