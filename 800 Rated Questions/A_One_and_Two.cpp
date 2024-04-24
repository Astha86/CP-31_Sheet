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
        int count = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==2) count++;
        }

        int c = 0;
        int ans = 0;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(v[i]==2){
                c++;
                count--;
            }
            if(count==c) {
                ans = i;
                flag = true;
                break;
            }
        }
        
        if(!flag) cout<<-1<<endl;
        else cout<<++ans<<endl;
    }
    return 0;
}