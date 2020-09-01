
// Problem: Monk and the Islands
// Contest: HackerEarth - Algorithms - Graphs - Breadth First Search
// URL: https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
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
vi adj[10005];
bool vis[10005];
int length[10005];


void bfs(int node) {
	queue<int> q;
	q.push(node);
	length[node] = 0;
	vis[node] = 1;
	
	int curr;
	while(!q.empty()) {
		curr = q.front(); q.pop();
		
		for(int child : adj[curr]) {
			if(!vis[child]) {
				length[child] = length[curr] + 1;
				q.push(child);
				vis[child] = 1;
			}
		}
	}
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t;
     t = 1;
     cin >> t;
     while(t--) {
     	int n, m;
     	cin >> n >> m;
     	
     	for(int i = 1; i <= n; i++) {
     		adj[i].clear();
     		vis[i] = 0;	
     	}
     	
     	int a, b;
     	for(int i = 1; i <= m ; i++) {
     		cin >> a >> b;
     		adj[a].PB(b);
     		adj[b].PB(a);
     	}
     	bfs(1);
  	    cout << length[n] << "\n";
     	
     }

     
     
     
     
     
return 0;
}