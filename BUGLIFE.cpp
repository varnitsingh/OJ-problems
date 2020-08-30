
// Problem: A Bug’s Life
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/BUGLIFE/
// Memory Limit: 1536 MB
// Time Limit: 5000 ms
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

vi adj[2005];
bool vis[2005];
bool color[2005];

bool dfs(int node, bool col) {
	vis[node] = 1;
	color[node] = col;
	
	
	for(int child : adj[node]) {
		if(!vis[child]) {
			color[child] = col^1;
			bool res = dfs(child, col^1);
			if(res == false) return false;
		}
		else {
			if(color[child] == color[node]) {
				return false;
			}
		}
	}
return true;
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int tc;
     cin >> tc;
   	int n, m;
     for(int t = 1; t <= tc; t++) {
     	cin >> n >> m;
     	int a,b;
     	
     	for(int i = 1; i <= n; i++) adj[i].clear(), vis[i] = 0;
     	
     	
     	for(int i = 1; i <= m; i++) {
     		cin >> a >> b;
     		adj[a].PB(b);
     		adj[b].PB(a);
     	}
     	
     	bool is_bipartite = true;
     	
     	for(int i = 1; i <= n; i++) {
     		
     		if(vis[i] == 0) {
     			bool res = dfs(i, 0);
     			if(res == false) {
     				is_bipartite = false;
     				break;
     			}
     		}
     	}
   		cout << "Scenario #" << t << ":\n";
     	if(!is_bipartite) {
     		cout << "Suspicious bugs found!\n";
     	}
     	else {
     		cout << "No suspicious bugs found!\n";
     	}
     	

     	
     }
     
     
     
     
     
return 0;
}