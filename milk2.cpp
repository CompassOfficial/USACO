/*
ID: thauhid2
TASK: milk2
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int milk[1000000+100];
int main()
{
	freopen("milk2.in", "r", stdin);
	freopen("milk2.out", "w", stdout);
	int j,mi=INT_MAX,mx=0,x,y,n,i,ans1=0,p=0,ans2=0,p1=0;
	vector<PII> v;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
		mi=min(mi,x);
		mx=max(mx,y);
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		int seg1=v[i].f;
		int seg2=v[i].s;
		for(j=i+1;j<n;j++,i++){
			if(v[i].f<=v[j].f&&v[j].f<=v[i].s){
				seg1=min(v[j].f,seg1);
				seg2=max(v[j].s,seg2);
			}
			else{
				break;
			}
		}
		for(j=seg1;j<=seg2-1;j++){
			milk[j]=1;
		}

	}
	for(i=mi;i<=mx;i++){
		if(milk[i]==0){
			ans1=max(p1,ans1);
			p++;
			p1=0;
		}
		else{
			ans2=max(p,ans2);
			p=0;
			p1++;
		}
		
	}
	cout<<ans1<<" "<<ans2<<"\n";
	return 0;
}
