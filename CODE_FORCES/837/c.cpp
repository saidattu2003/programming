#include<bits/stdc++.h>
using namespace std;
#define int long long int
 


int find(int arr[], int n)
{
    // Computing highest element
    int high = 0;
    for (int i = 0; i < n; i++)
        high = max(high, arr[i]);
 

    int divisors[high + 1] = { 0 };
 

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 1; j <= sqrt(arr[i]); j++)
        {
            
            if (arr[i] % j == 0)
            {
             
                divisors[j]++;

                if (j != arr[i] / j)
                    divisors[arr[i] / j]++;
            }
        }
    }
 

    for (int i = high; i >= 1; i--)
     

        if (divisors[i] > 1)
            return i;   
}

int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans= find(a,n);
    if(ans==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

  }



return 0;
}