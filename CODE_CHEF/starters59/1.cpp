#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll maxSum(vector<int>a, int size)
{
    ll mf = INT_MIN, me = 0;
 
    for (int i = 0; i < size; i++) {
        me = me + a[i];
        if (mf < me)
            mf = me;
 
        if (me < 0)
            me = 0;
    }
    return mf;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>a;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    int m;cin>>m;
	    vector<int>b;
	    for(int i=0;i<m;i++){
	        int x;
	        cin>>x;
	        b.push_back(x);
	    }
	    //sort(b.rbegin(),b.rend());
	    int sum=0;
	    for(int i=0;i<m;i++){
	        if(b[i]>0){
	            sum=sum+b[i];
	        }
	    }
	    vector<int>f;
	    f.push_back(sum);
	    for(int i=0;i<n;i++){
	        f.push_back(a[i]);
	    }
	    vector<int>back;
	     for(int i=0;i<n;i++){
	        back.push_back(a[i]);
	    }
	    back.push_back(sum);
	    ll maxi=max(maxSum(f,n+1),maxSum(back,n+1));
	    cout<<maxi<<endl;
	    

	    
	}
	return 0;
}
