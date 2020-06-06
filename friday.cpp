/*
ID: thauhid2
TASK: friday
LANG: C++11
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	freopen("friday.in", "r", stdin);
	freopen("friday.out", "w", stdout);
	int week[8]={0};
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31},days,lep=0,d=3,i,j,n,l;
	cin>>n;
	for(i=1900;i<=1900+n-1;i++){
		lep=0;
		if((i%4==0&&i%100!=0)||(i%400==0)){
			lep=1;
		}
		for(j=0;j<12;j++){
			days=month[j];
			if(j==1) days+=lep;
			for(l=1;l<=days;l++){
				if(l==13){
					week[d]++;
				}
				d=(d%7)+1;
			}
		}
	}
	for(i=1;i<=7;i++){
		cout<<week[i];
		if(i!=7){
			cout<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
