// Cycle detection in a graph

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


bool dfs(int node, int parent) {
	vis[node] = 1;
	
	for(int child : adj[node]) {
		if(!vis[child]) {
			bool res = dfs(child, node);
			if(res == true) return true;
			
		}
		else {
			if(child != parent) {
				return true;
			}
		}
	}
return false;	
}



int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int n, m;
     cin >> n >> m;
     
     int a, b;
     
     for(int i = 1; i <= n; i++) {
     	cin >> a >> b;
     	adj[a].PB(b);
     	adj[b].PB(a);
     }
     cout << dfs(1, -1) << "\n";
     
     
     
     
     
     
     
return 0;
}