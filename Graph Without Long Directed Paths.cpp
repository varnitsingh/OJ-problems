
// Problem: F. Graph Without Long Directed Paths
// Contest: Codeforces - Codeforces Round #550 (Div. 3)
// URL: https://codeforces.com/contest/1144/problem/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
bool color[200005];
bool vis[200005];

bool dfs(int node, bool col) {
	vis[node] = true;
	
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
     int t;
     t = 1;
    // cin >> t;
     while(t--) {
     	
     	int n, m;
     	cin >> n >> m;
     	int a, b;
     	vector<pair<int, int> > A;
     	for(int i = 1; i <= m; i++) {
     		cin >> a >> b;
     		A.push_back({a, b});
     		
     		adj[a].PB(b);
     		adj[b].PB(a);
     	}
		bool flag = true;
     	for(int i = 0; i <= n; i++) {
     		bool res = dfs(i, 0);
     		if(res == false) {
     			flag = false;
     			break;
     		}
     	}
     	if(flag) {
     		cout << "YES\n";
     		for(int i = 0; i < (int)A.size(); i++) {
     			if(color[A[i].first] == 0) {
     				cout << "1";
     			}
     			else {
     				cout << "0";
     			}
     		}
     		cout << "\n";
     		
     		
     	}
     	else {
     		cout << "NO\n";
     	}
     	
     }
     
     
     
     
     
return 0;
}