#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n ,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int flag = true;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]) flag = false;
        }

        if(k==1 && flag==false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}