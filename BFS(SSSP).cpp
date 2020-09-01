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
int length[100005];

void bfs(int node) {
	queue<int> q;
	q.push(node);
	length[node] = 0;
	
	int curr;
	
	while(!q.empty()) {
		curr =q.front(); q.pop();
		vis[curr] = 1;
		for(int child : adj[curr]) {
			if(!vis[child]) {
				length[child] = length[curr]+1;
				q.push(child);
			}
		}
	}
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int n,m;
     cin >> n >> m;
     int a, b;
     for(int i = 1; i <= m; i++) {
     	cin >> a >> b;
     	adj[a].PB(b);
     	adj[b].PB(a);
     }
     bfs(3);
     
     for(int i = 1; i <= n; i++) {
     	cout << length[i] << " ";
     }
     
     
     
     
return 0;
}