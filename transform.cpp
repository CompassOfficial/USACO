/*
ID: thauhid2
TASK: transform
LANG: C++11
*/
#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
char cmp[11][11],grid[11][11],ans[11][11];
void rotate(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cmp[j][n-i-1]=grid[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			grid[i][j]=cmp[i][j];
		}
	}
}
void reflect(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cmp[i][j]=grid[i][n-j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			grid[i][j]=cmp[i][j];
		}
	}
}
int compare(int n){
	int j,i;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(grid[i][j]!=ans[i][j]){
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	freopen("transform.in", "r", stdin);
	freopen("transform.out", "w", stdout);
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>ans[i][j];
		}
	}
	rotate(n);
	if(compare(n)){
		cout<<1<<"\n";
		return 0;
	}
	rotate(n);
	if(compare(n)){
		cout<<2<<"\n";
		return 0;
	}
	rotate(n);
	if(compare(n)){
		cout<<3<<"\n";
		return 0;
	}
	rotate(n);
	
	if(compare(n)){
		cout<<6<<"\n";
		return 0;
		}reflect(n);
	if(compare(n)){
		cout<<4<<"\n";
		return 0;
	}
	else{
		
		rotate(n);
		if(compare(n)){
			cout<<5<<"\n";
			return 0;
		}
		rotate(n);
		if(compare(n)){
			cout<<5<<"\n";
			return 0;
		}
		rotate(n);
		if(compare(n)){
			cout<<5<<"\n";
			return 0;
		}
	}
	cout<<7<<"\n";
	return 0;
}
