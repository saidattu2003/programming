#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;cin>>x>>y;
    int a=abs(x)+abs(y);
    if(x>0 and y>0){
        cout<<0<<" "<<a<<" "<<a<<" "<<0;
    }
    else if(x<0 and y>0){
        cout<<-a<<" "<<0<<" "<<0<<" "<<a;
    }
    else if(x>0 and y<0){
        cout<<0<<" "<<-a<<" "<<a<<" "<<0;
    }
    else if(x<0 and y<0){
        cout<<-a<<" "<<0<<" "<<0<<" "<<-a;
    }
    return 0;
}