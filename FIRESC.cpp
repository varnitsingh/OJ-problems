
// Problem: Fire Escape Routes
// Contest: CodeChef - Practice(Easy)
// URL: https://www.codechef.com/problems/FIRESC
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long int
#define vi vector<int>
#define vii vector<int, int>
#define vc vector<char>
#define vl vector<ll>
#define mod 1000000007 
#define INF 1000000009
using namespace std;

vi adj[100005];
bool vis[100005];
//ll size = 0;
ll cc_size;
void dfs(int node) {
	vis[node] = 1;
	cc_size++;
	
	for(int child : adj[node]) {
		if(!vis[child]) {
			dfs(child);
		}
	}
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t;
     cin >> t;
     while(t--) {
     	int n , m;
     	cin >> n >> m;
     	int a, b;
     	
     	for(int i = 0 ; i <= n; i++) {
     		adj[i].clear();
     		vis[i] = 0;
     	}
		
		
     	for(int i = 1; i <= m; i++) {
     		cin >> a >> b;
     		
     		adj[a].PB(b);
     		adj[b].PB(a);
     	}
     	int cc = 0;
     	ll pdt = 1;
     	for(int i = 1; i <= n; i++) {
     		if(!vis[i]) {
     		cc_size = 0;
     		dfs(i);
			pdt = pdt * cc_size;
			pdt %= mod;
     		cc++;
     		}
     	}
     	cout << cc << " " << pdt%mod << "\n";
     	
     	
     	
     }
     
     
     
     
     
return 0;
}