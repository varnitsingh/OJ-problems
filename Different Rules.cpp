
// Problem: B. Different Rules
// Contest: Codeforces - Codeforces Round #622 (Div. 2)
// URL: https://codeforces.com/contest/1313/problem/B
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


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t;
     t = 1;
     cin >> t;
     while(t--) {
     	int num;
     	cin >> num;
     	
     	int n, m;
     	cin >> n >> m;
     	
     	ll mnn = min(num, max(1, (n + m - num + 1)));
        ll mxx = min(num, (n + m - 1));
        
        cout << mnn << " " << mxx << "\n";
     	
     }
     
     
     
     
     
return 0;
}