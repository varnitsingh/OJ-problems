
// Problem: Feasible relations
// Contest: HackerEarth - Algorithms - Graphs - Depth First Search
// URL: https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/
// Memory Limit: 256 MB
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


vi adj[1000006];
bool vis[1000006];
int cc[1000006];
int curr_cc;

void dfs(int node) {
	vis[node] = 1;
	cc[node] = curr_cc;
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
   	vector<pair<int, int>> pr;
     string oper;
     while(t--) {
     	int n, k;
     	cin >> n >> k;
		int a, b;
     	pr.clear();
     	for(int i = 1; i <= n; i++) {
     		adj[i].clear();
     		vis[i] = 0;
     	}
     	
     	for(int i =1; i <= k; i++) {
     		cin >> a >> oper >> b;
     		
     		if(oper == "=") {
     			adj[a].PB(b);
     			adj[b].PB(a);
     		}
     		else {
     			pr.PB({a, b});
     		}
     		
     	}
     	
     	for(int i = 1; i <= n; i++) {
			if(!vis[i]) {
				curr_cc++;
				dfs(i);
			}
     	}
     	
     	
     	bool flag = 0;
     	for(int i = 0; i < (int)pr.size(); i++) {
     		a = pr[i].first;
     		b = pr[i].second;
     		if(cc[a] == cc[b]) {
     			flag = 1;
     			cout << "NO\n"; break;
     		}
     		
     	}
     	if(flag) {
     		continue;
     	}
     	cout << "YES\n";
     	
     }
     
     
     
     
     
return 0;
}