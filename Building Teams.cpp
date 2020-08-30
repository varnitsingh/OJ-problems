
// Problem: Building Teams
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1668
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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
vi adj[200005];
bool vis[200005];
bool colors[200005];


bool dfs(int node, bool  col) {
	vis[node] = 1;
	
	for(int child : adj[node]) {
		if(!vis[child]) {
			colors[child] = col^1;
			bool res = dfs(child, col^1);
			if(res == false) {
				return false;
			}
			
		}
		else {
			if(colors[child] == colors[node]) return false;
		}
	}
	
return true;
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int n, m;
     cin >> n >> m;
     int a, b;
     for(int i = 1; i <= m; i++) {
     	cin >> a >> b;
     	adj[a].PB(b);
     	adj[b].PB(a);
     }
   	bool res;
     for(int i = 1; i <= n; i++) {
			res = dfs(i, 0);
			if(res == false) {
				break;
			}
			
     }
     if(!res) {
     	cout << "IMPOSSIBLE\n";
     }
     else {
     	for(int i = 1; i <= n; i++) {
     		cout << (int)colors[i] + 1 << " ";
     	}
     	cout << "\n";
     }
     
     
     
     
     
     
return 0;
}