#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n = 0;
        cin>>n;
        if(n%3==1 || n%3==2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}