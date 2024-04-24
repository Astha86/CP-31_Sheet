#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%k != 0){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else {
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}