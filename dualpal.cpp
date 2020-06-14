/*
ID: thauhid2
TASK: dualpal
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
string convert(int a,int b){
	int rem=0;
	string s="";
	while(a>0){
		rem=a%b;
		a/=b;
		s+='0'+rem;
	}
	reverse(s.begin(),s.end());
	return s;
}
int check(string s){
	int i=0,j=s.size()-1;
	for(i=0;i<s.size();i++,j--){
		if(s[i]!=s[j]){
			return 0;
		}
	}
	return 1;
}
int main()
{
	freopen("dualpal.in", "r", stdin);
	freopen("dualpal.out", "w", stdout);
	int s,b,i,j,n,cnt=0;
	cin>>n>>s;
	for(i=s+1;i<=1000000&&n>0;i++){
		cnt=0;
		for(j=2;j<=10;j++){
			cnt+=check(convert(i,j));
		}
		if(cnt>=2){
			cout<<i<<"\n";
			n--;
		}
	}
	return 0;
}
