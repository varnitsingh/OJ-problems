
// Problem: C. Link Cut Centroids
// Contest: Codeforces - Codeforces Round #670 (Div. 2)
// URL: https://codeforces.com/contest/1406/problem/C
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long int
#define vi vector<int>
#define vii vector<int, int>
#define vc vector<char>
#define vl vector<ll>
#define mod 1000000007 
#define INF 1000000009
 
using namespace std;

 
 
 
vector<int> Centroid(const vector<vector<int>> &g) {
    int n = g.size();
 
    vector<int> centroid;
    vector<int> sz(n);
    function<void (int, int)> dfs = [&](int u, int prev) {
        sz[u] = 1;
        bool is_centroid = true;
        for (auto v : g[u]) if (v != prev) {
 
                dfs(v, u);
                sz[u] += sz[v];
                if (sz[v] > n / 2) is_centroid = false;
            }
        if (n - sz[u] > n / 2) is_centroid = false;
        if (is_centroid) centroid.push_back(u);
    };
    dfs(0, -1);
    return centroid;
}
 

 
signed main()
{
    int t = 1; cin >> t;
    for (int test = 1; test <= t; test++)
    {
        vector<vector<int> > adj;
        int n; cin >> n;
        adj.resize(n);
        for (int i = 0; i < n - 1; i++)
        {
            int x, y; cin >> x >> y;
            x--, y--;
            adj[x].push_back(y);
            adj[y].push_back(x);
 
        }
 
        auto centroid = Centroid(adj);
        
        if(centroid.size() == 1) {
        	
        	
        	for(int node : adj[centroid[0]]) {
        		cout << node + 1 << " " << centroid[0] + 1 << "\n";
        		cout << node + 1<< " " << centroid[0] +1 << "\n";
        		break;
        	}
        	
        	
        	
        	
        }
        else {
        	for(int node : adj[centroid[0]]) {
        		if(node != centroid[1]) {
        			cout << centroid[0] + 1 << " " << node + 1 << "\n";
        			cout << centroid[1] + 1 << " "<< node + 1 << "\n";
        			break;
        		}
        	}
        }
 
 
 
    }
    return 0;
}