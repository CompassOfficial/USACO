/*
ID: thauhid2
TASK: wormhole
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int n,x[13],y[13],pir[13],nxt[13];
int cycle(){
	for(int i=1;i<=n;i++){
		int p=i;
		for(int j=0;j<n;j++){
			p=nxt[pir[p]];
		}
		if(p!=0) return 1;
	}
	return 0;
}

int solve(){
	int i,tot=0;
	for(i=1;i<=n;i++){
		if(pir[i]==0) break;
	}
	if(i>n){
		if(cycle()) return 1;
		return 0;
	}
	for(int j=i+1;j<=n;j++){
		if(pir[j]==0){
			pir[i]=j;
			pir[j]=i;
			tot+=solve();
			pir[i]=pir[j]=0;
		}
	}
	return tot;
}

int main()
{
	freopen("wormhole.in", "r", stdin);
	freopen("wormhole.out", "w", stdout);
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++){
		cin>>x[i]>>y[i];
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(x[j]>x[i]&&y[i]==y[j]){
				if(nxt[i]==0||x[j]-x[i]<x[nxt[i]]-x[i]){
					nxt[i]=j;
				}
			}
		}
	}
	cout<<solve()<<"\n";
	return 0;
}
