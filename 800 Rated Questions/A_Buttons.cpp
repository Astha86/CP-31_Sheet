#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==1){
            if(a>=b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}