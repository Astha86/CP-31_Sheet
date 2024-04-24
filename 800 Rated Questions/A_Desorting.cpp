#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        bool flag = true;
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]) flag = false;
        }

        if(flag==false) cout<<0<<endl;
        else{
            int ans = INT_MAX;
            for(int i=1; i<n; i++){
                int x = arr[i] - arr[i-1];
                ans = min(ans,x);
            }
            ans = (ans/2)+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}