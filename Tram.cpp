
// Problem: A. Tram
// Contest: Codeforces - Codeforces Beta Round #87 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/116/A
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


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int n;
     cin >> n;
     int a, b;
     
     int res = 0;
     int max_res = 0;
     while(n--) {
     	cin >> a >> b;
     	res -= a;
     	res += b;
     	max_res = max(max_res, res);
     }
     cout << max_res << "\n";
     
     
     
     
return 0;
}