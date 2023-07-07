#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        if(n%2==0){
            int t=n/2;
            for(int i=0;i<n/2;i++){
                cout<<t<<" ";
                cout<<t+(n/2)<<" ";
                t--;
            }
            cout<<endl;
        }
        else{
            int t=1;
            for(int i=0;i<n/2;i++){
                cout<<t<<" ";
                cout<<t+n/2+1<<" ";
                t++;
            }
            cout<<n/2+1<<endl;
        }

    }
    return 0;
}