#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n = 0;
        cin>>n;
        //if(n==2) cout<<"YES"<<endl;
        //else{
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }

            bool flag = true;
            unordered_map<int,int>fre;
            for(int i=0; i<n; i++){
                fre[arr[i]]++;
                if(fre.size()>2){
                    flag = false;
                    break;
                }
            }
            if(fre.size()==2){
                int x = begin(fre)->second;
                if(x!=n/2 && x!=(n+1)/2) flag = false;
            }
            if(flag==true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       //}
    }
    return 0;
}