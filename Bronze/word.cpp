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
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	int n,k,i,cnt=0,f=1;
	cin>>n>>k;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
		cnt+=s.size();
		if(cnt>k){
			f=0;
			cout<<"\n"<<s;
			cnt=0;
			cnt+=s.size();
		}
		else{
			if(f){
				cout<<s;
				f=0;
			}
			else{
				cout<<" "<<s;
			}
		}
	}
	
	return 0;
}
