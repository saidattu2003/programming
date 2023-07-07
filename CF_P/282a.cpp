#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    int n=0;
    while(tt--){
        string s;
        cin>>s;
        if((s[1])=='+')n++;
        else n--;
    }
    cout<<n;
    return 0;
}