#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;sum=sum+x;
    }
    cout<<sum/n<<endl;
    return 0;
}