#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        bool r=true;
        int a[n];
        a[0]=d[0];
        for(int i=1;i<n;i++){
            if((a[i-1]-d[i])>0 and d[i]!=0){
                cout<<-1;
                r=false;
                break;
            }
            else{
                a[i]=(a[i-1]+d[i]);
            }
        }
        if(r){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}