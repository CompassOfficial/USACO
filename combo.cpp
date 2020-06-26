/*
ID: thauhid2
TASK: combo
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int compare(int mi1,int mi2,int mi3,int i,int j,int l,int n){ 

	int cmp1 = min(abs(mi1-i),(n-abs(mi1-i)));
	int cmp2 = min(abs(mi2-j),(n-abs(mi2-j)));
	int cmp3 = min(abs(mi3-l),(n-abs(mi3-l)));
	if(cmp1<=2&&cmp2<=2&&cmp3<=2){
		return 1;
	}
	return 0;
}
int main()
{
	freopen("combo.in", "r", stdin);
	freopen("combo.out", "w", stdout);
	int n,farm1,farm2,farm3,mas1,mas2,mas3,i,j,l,cnt=0;

	cin>>n>>farm1>>farm2>>farm3>>mas1>>mas2>>mas3;

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(l=1;l<=n;l++){
				if(compare(farm1,farm2,farm3,i,j,l,n)){
					cnt++;
				}
				else if(compare(mas1,mas2,mas3,i,j,l,n)){
					cnt++;
				}
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
