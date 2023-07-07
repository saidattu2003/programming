#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a;
	    vector<int>b;bool p1=false;
	    bool p2=false;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;a.push_back(x);
	        if(x<0)p1=true;
	    }
	    for(int i=0;i<n;i++){
	        int x;cin>>x;b.push_back(x);
	        if(x<0)p2=true;
	    }
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    cout<<a[0]-b[n-1]<<endl;

	}
	return 0;
}
