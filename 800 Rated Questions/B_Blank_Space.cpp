#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int ans = 0;
        int x = 0;
        for(int i=0; i<n; i++){
            if(v[i]==0) x++;
            else{
                ans = max(ans,x);
                x = 0;
            }
        }
        ans = max(ans,x);
        cout<<ans<<endl;
    }
    return 0;
}