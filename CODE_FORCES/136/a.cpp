#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;cin>>n>>m;
        if(n==1 or m==1){
            cout<<n<<" "<<m<<endl;
        }
        else if(n<3 and m<3){
            cout<<n<<" "<<m<<endl;
        }
        else if(n<3 and m==3){
            cout<<n<<" "<<2<<endl;
        }
        else if(m<3 and n==3){
            cout<<2<<" "<<m<<endl;
        }
        else if(n==3 and m==3){
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<n<<" "<<m<<endl;
        }

    }
    return 0;
}
