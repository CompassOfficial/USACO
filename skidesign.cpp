/*
ID: thauhid2
TASK: skidesign
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
	freopen("skidesign.in", "r", stdin);
	freopen("skidesign.out", "w", stdout);
	int i,j,n,x,ans=INT_MAX;
	cin>>n;
	int ara[n];
	for(i=0;i<n;i++){
		cin>>ara[i];
	}
	sort(ara,ara+n);
	for(i=1;i<=983;i++){
		x=0;
		for(j=0;j<n;j++){
			
			if(ara[j]<i){
				x+=(i-ara[j])*(i-ara[j]);
			}
			else if(ara[j]>(i+17)){
				x+=(ara[j]-(i+17))*(ara[j]-(i+17));
			}
		}
		ans=min(ans,x);
	}
	cout<<ans<<endl;
	return 0;
}
