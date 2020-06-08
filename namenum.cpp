/*
ID: thauhid2
TASK: namenum
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
string ret(string s){
	int i;
	string s1="";
	for(i=0;i<s.size();i++){
		if(s[i]<='C'){
			s1+='2';
		}
		else if(s[i]<='F'){
			s1+='3';
		}
		else if(s[i]<='I'){
			s1+='4';
		}
		else if(s[i]<='L'){
			s1+='5';
		}
		else if(s[i]<='O'){
			s1+='6';
		}
		else if(s[i]<='S'){
			s1+='7';
		}
		else if(s[i]<='V'){
			s1+='8';
		}
		else{
			s1+='9';
		}
	}
	return s1;
}
int main()
{
	FILE *fp;
	fp = fopen("dict.txt", "r");
	string s1,s[4617];
	char c[15];
	for(int i=0;i<4617;i++){
		fscanf(fp," %s",&c);
		s[i]=c;
	}
	freopen("namenum.in", "r", stdin);
	freopen("namenum.out", "w", stdout);
	int i,cnt=0;
	cin>>s1;
	for(i=0;i<4617;i++){
		string s2=ret(s[i]);
		if(s1==s2){
			cout<<s[i]<<"\n";
			cnt++;
		}
	}
	if(cnt==0){
		cout<<"NONE\n";
	}
	return 0;
}
