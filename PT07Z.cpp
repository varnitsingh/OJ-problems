
// Problem: Longest path in a tree
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/PT07Z/
// Memory Limit: 1536 MB
// Time Limit: 500 ms
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
int maxD, maxNode;
vi adj[10005];
bool vis[10005];


void dfs(int node, int len) {
	vis[node] = 1;
	if(len > maxD) {
		maxD = len;
		maxNode = node;
	}
	
	for(int child : adj[node]) {
		if(!vis[child]) {
			dfs(child, len+1);
		}
		
	}
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int n;
     cin >> n;
     int m = n-1;
     int a, b;
     
     for(int i = 1; i <= m; i++) {
     	cin >> a >> b;
     	adj[a].PB(b);
     	adj[b].PB(a);
     }
     
     dfs(1, 0);
     maxD = -1;
     for(int i = 1; i <= n; i++) {
     	vis[i] = 0;
     }
     dfs(maxNode, 0);
     
    cout << maxD << "\n";
     
     
     
return 0;
}