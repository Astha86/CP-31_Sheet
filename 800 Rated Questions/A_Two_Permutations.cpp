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
        int n,a,b;
        cin>>n>>a>>b;
        if(n==1) yes;
        else if(a==n && b==n) yes;
        else {
            int x = n-a-b;
            if(x>1) yes;
            else no;
        }
    }
    return 0;
}