#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n = 0;
        cin>>n;
        string s;
        cin>>s;
        int x = 1;
        for(int i=0; i<n-1; i++){
            if(s[i] == '.' && s[i+1] == '.') x++;
            else x = 1;
            if(x==3) break;
        }
        if(x>=3) cout<<2<<endl;
        else{
            x = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '.') x++;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}