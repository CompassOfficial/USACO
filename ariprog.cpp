/*
ID: thauhid2
TASK: ariprog
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int check[1000000];
vector<PII> ans;
int main()
{
	freopen("ariprog.in", "r", stdin);
	freopen("ariprog.out", "w", stdout);
	int n,i,j,m,mx=0;
	cin>>n>>m;
	vector<int> v;
	for(i=0;i<=m;i++){
		for(j=0;j<=m;j++){
			if(check[i*i+j*j]==0){
				v.pb(i*i+j*j);
				mx=max(i*i+j*j,mx);
				check[i*i+j*j]=1;
			}
		}
	}
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		for(j=1;j<=3000;j++){
			int cnt=1,l=1;
				while(v[i]+(n-1)*j<=mx&&l<n){
					if(check[v[i]+l*j]){
						cnt++;
					}
					l++;
				}
				if(cnt==n){
					ans.pb({j,v[i]});
				}
		}
	}
	if(ans.size()==0){
		cout<<"NONE"<<"\n";
		return 0;
	}
	sort(ans.begin(),ans.end());
	for(i=0;i<ans.size();i++){
		cout<<ans[i].s<<" "<<ans[i].f<<"\n";
	}
	return 0;
}
