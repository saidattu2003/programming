#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        int c=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            c=c+v[i];
        }
        if(c%2!=0){
            cout<<-1<<endl;
        }
        else{
            vector<pair<int,int>>a;

            for(int i=0;i<n;i++){
                if(v[i]==v[i+1]){
                    a.push_back({i,i+1});
                }
                else{
                    a.push_back({i,i});
                    a.push_back({i+1,i+1});
                }
                i++;
            }
            cout<<a.size()<<endl;
            for(int i=0;i<a.size();i++){
                cout<<a[i].first<<" "<<a[i].second<<endl;
            }
            cout<<endl;
        }


    }
    return 0;
}