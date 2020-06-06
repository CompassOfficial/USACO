/*
ID: thauhid2
TASK: gift1
LANG: C++11
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	map<string,int> mp;
	string s;
	int n,i,m,j,money;
	cin>>n;
	string s1[n];
	for(i=0;i<n;i++){
		cin>>s;
		mp[s]=0;
		s1[i]=s;
	}
	for(i=0;i<n;i++){
		cin>>s;
		cin>>money>>m;
		if(m>0){
		mp[s]-=money;
		mp[s]+=(money%m);
		for(j=0;j<m;j++){
			cin>>s;
			mp[s]+=money/m;
		}
	}
	}
	for(i=0;i<n;i++){
		cout<<s1[i]<<" "<<mp[s1[i]]<<"\n";
	}
	return 0;
}
