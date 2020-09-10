
// Problem: A. Insomnia cure
// Contest: Codeforces - Codeforces Round #105 (Div. 2)
// URL: https://codeforces.com/problemset/problem/148/A
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
     
     int k,l,m,n,d;
     cin >> k >> l >> m >> n >> d;
     int cnt= 0;
     for(int i = 1; i <= d; i++) {
     	if(i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0) {
     		cnt++;
     	}
     }
     cout << cnt << "\n";
     
     
     
     
return 0;
}