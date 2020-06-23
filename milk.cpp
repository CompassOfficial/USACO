/*
ID: thauhid2
TASK: milk
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;

int main()
{
	freopen("milk.in", "r", stdin);
	freopen("milk.out", "w", stdout);
	vector<PII> v;
	int x,y,n,m,i;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>x>>y;
		v.pb({x,y});
	}
	sort(v.begin(),v.end());
	ll ans=0;
	for(i=0;i<m&&n>0;i++){
		ans+=min(n,v[i].s)*v[i].f;
		n-=v[i].s;
	}
	cout<<ans<<"\n";
	return 0;
}
