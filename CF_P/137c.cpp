#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        string s;cin>>s;
        int a[n];for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                if(s[i-1]=='0'&& s[i]=='1'){
                    s[i-1]='1';s[i]='0';
                }
            }
        }
        int su=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                su+=a[i];
            }
        }
        cout<<su<<endl;



    }
    return 0;
}