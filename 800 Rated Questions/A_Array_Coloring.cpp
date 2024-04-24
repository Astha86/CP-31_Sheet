#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int c = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==1) c++;
        }
        if(c%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}