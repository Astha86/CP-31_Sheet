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
        string s;
        cin>>s;
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i<j){
            if(s[i]!=s[j]){
                count += 2;
                i++;
                j--;
            } 
            else break;
        }
        cout<<n-count<<endl;
    }
    return 0;
}