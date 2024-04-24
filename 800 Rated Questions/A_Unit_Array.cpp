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
 
		vector<int> arr(n);
		int f1 = 0;
        int f2 = 0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] == -1)f1++;
			else f2++;
		}
 
		if(f1<f2){
			if(f1%2==1)cout<<1<<endl;
			else cout<<0<<endl;
		}

        else{
			int c1 = f1 - n/2;
 
			cout<<c1 + (((n/2)%2==1)?1:0)<<endl;
        }
	}
    return 0;
}
