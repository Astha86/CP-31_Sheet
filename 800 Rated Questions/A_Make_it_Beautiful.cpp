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
        if(v[0]==v[n-1]) no;
        else{
            yes;
            cout<<v[n-1];
            for(int i=0;i<n-1;i++){
                cout<<" "<<v[i]<<" ";
            }
            cout<<endl;
        }
 
    }
    return 0;
}