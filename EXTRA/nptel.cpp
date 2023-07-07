#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    int m;
    cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        b.push_back(x);
    }
    vector<int>f;
    int i=0,j=0;
    while(i<n and j<m){
        if(a[i]>b[j]){
            f.push_back(a[i]);
            cout<<a[i]<<" ";
            i++;
        }
        else{
            f.push_back(b[j]);
            cout<<b[j]<<" ";
            j++;
        }
    }
    if(j==m){
        for(int s=i;s<n;s++){
            f.push_back(a[s]);
        }
    }
    if(i==n){
        for(int s=j;s<m;s++){
            f.push_back(a[s]);
        }
    }
    for(int i=0;i<f.size();i++){
        //1cout<<f[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}