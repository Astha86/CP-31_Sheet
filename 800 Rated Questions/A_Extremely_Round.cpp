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
        int d = 0;
        int ld = 0;
        while(n>0){
            ld = n%10;
            n/=10;
            d++;
        }
        int ans = ld+(d-1)*9;
        cout<<ans<<endl; 
    }
    return 0;
}