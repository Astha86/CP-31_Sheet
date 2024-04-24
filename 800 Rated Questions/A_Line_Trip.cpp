#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n,end;
        cin>>n>>end;
        int ans = INT_MIN;
        int start = 0;
        int tank = 0;
        for(int i=0; i<n; i++){
            cin>>tank;
            ans = max(ans,tank-start);
            start = tank; 
        }
        ans = max(ans,2*(end-start));
        cout<<ans<<endl;
    }
    return 0;
}