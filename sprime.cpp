/*
ID: thauhid2
TASK: sprime
LANG: C++11
*/

#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
vector<int> v[10];
bool isprime(int n){
	int limit = sqrt(n), i;
	for(i = 2; i <= limit; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main() 
{ 
	freopen("sprime.in", "r", stdin);
	freopen("sprime.out", "w", stdout);
	v[1].pb(2);
	v[1].pb(3);
	v[1].pb(5);
	v[1].pb(7);
	int i, n, j, k;
	cin >> n;
	for(i = 2; i <= 8; i++){
		for(j = 0; j < v[i - 1].size(); j++){
			for(k = 1; k <= 9; k+= 2){
				int num = v[i - 1][j]*10 + k;
				if(isprime(num)) v[i].pb(num);
			}
		}
	}
	sort(v[n].begin(), v[n].end());
	for(i = 0; i < v[n].size(); i++){
		cout << v[n][i] << "\n"; 
	}
	return 0; 
}  
