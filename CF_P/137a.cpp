#include<bits/stdc++.h>
using namespace std;



int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        n=10-n;
        cout<<3*n*(n-1)<<endl;



    }
    return 0;
}