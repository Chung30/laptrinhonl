#include<bits/stdc++.h>
using namespace std;
set<int> s;
int zero1(int n){
	s.insert(n);
	if(n==0) return 0;
	for(int a=2;a*a<=n;a++)
	if(n%a==0) {
		zero1((a-1)*(n/a+1));
	}
}
int main(){
	//int n; cin>>n;
	zero1(18);
	cout<<0<<" ";for(int x:s) cout<<x<<" "; 
	return 0;
}
