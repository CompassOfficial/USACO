/*
ID: thauhid2
TASK: beads
LANG: C++11
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	//freopen("beads.in", "r", stdin);
	//freopen("beads.out", "w", stdout);
	int n,i,j,cntr=0,cntb=0,cntw=0,mx=0,preb=0,prer=0;
	string s;
	cin>>n;
	cin>>s;
	int sz=s.size();
	s+=s;
	for(i=0;i<sz;i++){
		cntr=0;prer=0;
		cntw=0;cntb=0;preb=0;
		for(j=i;j<sz+i;j++){
			if(s[j]=='r'&&prer==0){
				cntr++;
				if(cntb>0){
					preb=1;
				}
			}
			else if(s[j]=='b'&&preb==0){
				cntb++;
				if(cntr>0){
					prer=1;
				}
			}
			else if(s[j]=='w'){
				cntw++;
			}
			else{
				break;
			}
		}
		mx=max(mx,cntr+cntb+cntw);
	}
	cout<<mx<<endl;
	return 0;
}
