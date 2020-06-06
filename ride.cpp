/*
ID: thauhid2
TASK: ride
LANG: C++11
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("ride.in", "r", stdin);
	freopen("ride.out", "w", stdout);
	string s,s1;
	cin>>s>>s1;
	ll sz=s.size(),sz1=s1.size(),i,j,cnt1=1,cnt2=1;
	for(i=0;i<sz;i++){
		cnt1*=(s[i]-64);
		cnt1%=47;
	}
	for(i=0;i<sz1;i++){
		cnt2*=(s1[i]-64);
		cnt2%=47;
	}
	if(cnt1==cnt2){
		cout<<"GO"<<"\n";
	}
	else{
		cout<<"STAY"<<"\n";
	}
	return 0;
}
