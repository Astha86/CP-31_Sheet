#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
		cin>>n;
 
		vector<int>v(n);
		for(int i=0; i<n; i++){
            cin>>v[i];
        }

		bool flag = false;
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
				if(gcd(v[i], v[j]) <= 2){
					flag = true;
					break;
				}
			}
		}
 
		if(flag) yes;
		else no;
    }
    return 0;
}