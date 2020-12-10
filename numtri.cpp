/*
ID: thauhid2
TASK: numtri
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
	freopen("numtri.in", "r", stdin);
	freopen("numtri.out", "w", stdout);
	int  i, n, j, x, ara[1005][1005];
	memset(ara, 0, sizeof ara);
	cin >> n;
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			cin >> x;
			ara[i][j] = x;
		}
	}
	for(i = n - 1; i >= 0; i--){
		for(j = 0; j <= i; j++){
			ara[i][j] += max(ara[i + 1][j], ara[i + 1][j + 1]);
		}
	}
	int ans = ara[0][0];
	cout << ans << "\n";
	return 0; 
}  
