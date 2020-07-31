/*
ID: thauhid2
TASK: 
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
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	int x1,x2,y1,y2,x_1,x_2,y_1,y_2,ans=0,b,a;
	cin>>x1>>y1>>x2>>y2>>x_1>>y_1>>x_2>>y_2;
	a=abs(max({x1,x2,x_1,x_2})-min({x1,x2,x_1,x_2}));
	b=abs(max({y1,y2,y_1,y_2})-min({y1,y2,y_1,y_2}));
	ans=max(a,b);
	cout<<ans*ans<<"\n";
	return 0;
}
