
// Problem: Building Roads
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1666/
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

vi adj[100005];
bool vis[100005];

void dfs(int node) {
	vis[node] = 1;
	
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
     int n, m;
     cin >> n >> m;
     int a, b;
     for(int  i = 1; i <= m; i++) {
     	cin >> a >> b;
     	adj[a].PB(b);
     	adj[b].PB(a);
     	
     }
     int cc = 0;
     vector<int> AA;
     for(int i =  1; i <= n; i++ ) {
     	if(!vis[i]) {
     		dfs(i);
     		AA.PB(i);
     		cc++;
     	}
     }
     cout << cc - 1 << "\n";
     int cnt = 0;
     if(cc != 1)
     for(int i = 0; i <(int)AA.size(); i++) {
     	if(cnt == cc-1) {
     		break;
     	}
     	cout << AA[i] << " " << AA[i+1] << "\n";
     	cnt++;
     }
     
     
     
     
     
return 0;
}