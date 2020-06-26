/*
ID: thauhid2
TASK: crypt1
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int mark[20];
int check(int i){
	int n=floor(log10(i)+1),cnt=0;
	while(i){
		cnt+=mark[i%10];
		i/=10;
	}
	if(cnt==n){
		return 1;
	}
	return 0;
}
int main()
{
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);
	int  i,j,l,cnt=0,n,x;
	cin>>n;
	int ara[n];
	for(i=0;i<n;i++){
		cin>>x;
		mark[x]=1;
	}
	for(i=100;i<=999;i++){
		if(check(i)){
			for(j=10;j<=99;j++){
				if(check(j)){
					if(floor(log10(i*(j%10)) + 1)==3&&floor(log10(i*(j/10))+1)==3&&check(i*(j%10))&&check(i*(j/10))){
						if(floor(log10(i*j)+1)==4&&check(i*j)){
							cnt++;
						}
					}
				}
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
