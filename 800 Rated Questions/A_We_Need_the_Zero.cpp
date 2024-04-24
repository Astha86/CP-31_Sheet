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
        int ans = 0;
        for(int i=0; i<n; i++){
            cin>>v[i]; 
            ans = ans^v[i];
        }
        if(n%2==1) cout<<ans<<endl;
        else if(ans==0) cout<<n<<endl;
        else cout<<-1<<endl; 
    }
    return 0;
}