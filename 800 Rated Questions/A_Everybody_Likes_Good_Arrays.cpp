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
        int count = 0;
        int x = v[0]%2;
        for(int i=1; i<n; i++){
            if(v[i]%2==x) count++;
            x = v[i]%2;
        }
        cout<<count<<endl;
    }
    return 0;
}