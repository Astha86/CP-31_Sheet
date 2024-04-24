#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int flag = false;
        for(int i=0; i<n; i++){
            if(arr[i]==k){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
    }
    return 0;
}