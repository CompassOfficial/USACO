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
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
	int a,b,c,d,e,f,g,h,g_p,s_g,b_s;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	g_p=h-g;
	f+=g_p;
	s_g=f-e;
	d+=s_g;
	b_s=d-c;
	cout<<b_s<<"\n"<<s_g<<"\n"<<g_p<<"\n";
	return 0;
}
