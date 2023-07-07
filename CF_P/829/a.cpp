#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s;cin>>s;
        int c=0;
        bool ch=true;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='Q'){
                    c++;
                }
                else{
                    c--;
                }
                if(c>0){
                    cout<<"NO"<<endl;
                    ch=false;
                    break;
                }
            }
            if(ch){
                cout<<"YES"<<endl;
            }

    }
    return 0;
}