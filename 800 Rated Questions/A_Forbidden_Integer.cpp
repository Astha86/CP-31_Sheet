#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(k==1 && x==1){
            cout<<"NO"<<endl;
            // cout<<n<<endl;
        }
        else{
            if(n%2==0){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0; i<n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
                if(k==2){
                    cout<<"NO"<<endl;
                    // cout<<n<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2-1; i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
        }
    }
    return 0;
}