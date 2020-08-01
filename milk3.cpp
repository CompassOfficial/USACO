/*
ID: thauhid2
TASK: milk3
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int n=21;
int A,B,C;
int vis[n][n][n],made[n];
void solve(int a,int b,int c){
	if(vis[a][b][c]) return;
	vis[a][b][c]=1;
	if(a==0) made[c]=1;
	int k=min(a,B-b);
	solve(a-k,b+k,c);
	k = min(a,C-c);
	solve(a-k,b,c+k);
	k = min(b,A-a);
	solve(a+k,b-k,c);
	k = min(b,C-c);
	solve(a,b-k,c+k);
	k = min(c,A-a);
	solve(a+k,b,c-k);
	k = min(c,B-b);
	solve(a,b+k,c-k);
}
int main()
{
	freopen("milk3.in", "r", stdin);
	freopen("milk3.out", "w", stdout);
	cin>>A>>B>>C;
	int i,flag=1;
	solve(0,0,C);
	for(i=0;i<n;i++){
		if(made[i]&&flag) cout<<i,flag=0;
		else if(made[i]) cout<<" "<<i;
	}
	cout<<"\n";
	return 0;
}
