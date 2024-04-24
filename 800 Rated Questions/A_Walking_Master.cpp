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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans = 0;
        if(b>d) ans = -1;
        else if(a+d-b<c) ans = -1;
        else ans = (2*(d-b))+a-c;

        cout<<ans<<endl;
    }
    return 0;
}