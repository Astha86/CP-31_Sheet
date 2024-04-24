#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans= 0;
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            ans += arr[i];
        }
        ans *= -1;
        cout<<ans<<endl;
    }
    return 0;
}