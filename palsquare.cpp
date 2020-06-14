/*
ID: thauhid2
TASK: palsquare
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
		if(rem>=10){
			s+=(rem-10)+'A';

		}
		else{
			s+='0'+rem;
		}
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
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	int b,i;
	cin>>b;
	for(i=1;i<=300;i++){
		if(check(convert(i*i,b))){
			cout<<convert(i,b)<<" "<<convert(i*i,b)<<"\n";
		}
	}
	return 0;
}
