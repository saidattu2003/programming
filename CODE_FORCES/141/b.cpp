#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        int matrix[n][n];
        int rowStart = 0; 
        int rowEnd = n - 1; 
        int count=0;
        int colStart= 0; 
        int colEnd = n - 1;
        int total=n*n;
        int a=1;
        int d=n*n -1;
        bool t=true;

     while(count < total){
     // Printing Starting Row 
        for(int Index = colStart; count < total && Index <= colEnd; Index++){
            matrix[rowStart][Index]=a;
            count++;
            if(t){
                a=a+d;
            }
            else{
                a=a-d;
            }
            t=!t;
            d--;

        }
    // Printing Ending Coloumn
        rowStart++;
         for(int Index  = rowStart; count < total && Index <= rowEnd; Index++){
            matrix[Index][colEnd]=a;
            count++;
            if(t){
                a=a+d;
            }
            else{
                a=a-d;
            }
            t=!t;
            d--;
        }
        // Printing Ending Row
        colEnd--;
        for(int Index =colEnd; count < total && Index >= colStart; Index--){
            matrix[rowEnd][Index]=a;
            count++;
            if(t){
                a=a+d;
            }
            else{
                a=a-d;
            }
            t=!t;
            d--;
        }
        rowEnd--;
        //Printing Starting Coloumne 
        for(int Index =rowEnd; count < total && Index >= rowStart; Index--){
            matrix[Index][colStart]=a;
            count++;
            if(t){
                a=a+d;
            }
            else{
                a=a-d;
            }
            t=!t;
            d--;
        }
        colStart++;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    return 0;
}