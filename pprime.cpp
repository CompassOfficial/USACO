/*
ID: thauhid2
TASK: pprime
LANG: C++11
*/

#include<bits/stdc++.h>
#define f first
#define s second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
vector<int> v;
bool isprime(int n){
	int limit = sqrt(n);
	for(int i = 2; i <= limit; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main() 
{ 
	freopen("pprime.in", "r", stdin);
	freopen("pprime.out", "w", stdout);
	int i, d1, d2, d3, d4, d5, palin, sz, a, b;
	for(d1 = 1; d1 < 10; d1 += 2){
		palin = d1;
		if(isprime(palin)) v.pb(palin);
		palin = d1*10 + d1;
		if(isprime(palin)) v.pb(palin);
		for(d2 = 0; d2 < 10; d2++){
			palin = d1*100 + d2*10 + d1;
			if(isprime(palin)) v.pb(palin);
			palin = d1*1000 + d2*100 + d2*10 + d1;
			if(isprime(palin)) v.pb(palin);
			for(d3 = 0; d3 < 10; d3++){
				palin = 10000*d1 + 1000*d2 + 100*d3 + 10*d2 + d1;
				if(isprime(palin)) v.pb(palin);
				palin = 100000*d1 + 10000*d2 + 1000*d3 + 100*d3 + 10*d2 + d1;
				if(isprime(palin)) v.pb(palin);
				for(d4 = 0; d4 < 10; d4++){
					palin = d1*1000000 + 100000*d2 + 10000*d3 + d4*1000 + 100*d3 + 10*d2 + d1;
					if(isprime(palin)) v.pb(palin);
					palin = d1*10000000 + 1000000*d2 + d3*100000 + d4*10000 + d4*1000 + d3*100 + d2*10 + d1;
					if(isprime(palin)) v.pb(palin);
				}
			}
		}
	}
	cin >> a >> b;
	sz = v.size();
	sort(v.begin(), v.end());
	for(i = 0; i < sz; i++){
		if(v[i] >= a && v[i] <= b) cout << v[i] << "\n";
	}
	return 0; 
}  
