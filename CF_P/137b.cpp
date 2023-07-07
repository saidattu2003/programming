#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<=n/2;i++){
                cout<<i+n/2<<" "<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=1;i<n/2+1;i++){
                cout<<i<<" "<<i+n/2+1<<" ";
            }
            cout<<n/2+1<<endl;
        }

    }
    return 0;
}