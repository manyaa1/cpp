//*                         * 
//* *                     * * 
//* * *                 * * * 
//* * * *             * * * * 
//* * * * *         * * * * * 
//* * * * * *     * * * * * * 
//* * * * * * * * * * * * * * 
//* * * * * *     * * * * * * 
//* * * * *         * * * * * 
//* * * *             * * * * 
//* * *                 * * * 
//* *                     * * 
//*                         * 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
  
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Butterfly Pattern of " << rows << " rows." << endl;

    
    for( int i = 0; i <= rows; i++ ){
        // Print left side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
        
      
        int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        
        // Print right side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }

        cout << endl;
    }
    

    for( int i = rows - 1; i >= 0; i-- ){
        
        // Print left side spaces.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }
              int spaces = 2 * (rows - i);
        for( int j = 0; j < spaces; j++){
            cout << "  ";
        }
        
        // Print right side stars.
        for( int j = 0; j <= i; j++ ){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
