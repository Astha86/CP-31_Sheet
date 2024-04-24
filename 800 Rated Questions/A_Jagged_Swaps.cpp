#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n ; i++){
            cin>>arr[i];
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}