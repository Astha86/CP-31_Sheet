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
		for(int i=0; i<n; i++)
			cin>>v[i];
 
		map<int,int> mp;
		for(auto a: v){
			mp[a]++;
		}
 
		if(mp.size() == 1){
			cout<<"-1"<<endl;
		}else{
			auto last = rbegin(mp);
			 c(last->second, last->first);
			mp.erase(last->first);
 
			cout<<n-c.size()<<nl;
			cout<<c.size()<<nl;
			
			//Print b
			for(auto [key, value]: mp){
				for(int i=0; i<value; i++)
					cout<<key<<sp;
			}
			cout<<nl;
 
			//Print b
			for(int i=0; i<len(c); i++)
				cout<<c[i]<<sp;
			cout<<nl;
 
		}
 
	
    }
    return 0;
}