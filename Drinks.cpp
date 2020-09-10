
// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round #126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
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
     vi A(n);
     for(int i = 0 ; i < n; i++) {
     	cin >> A[i];
     }
     
     int total = 100 * n;
     int orange = 0;
     for(int i = 0; i < n; i++) {
     	orange += A[i];
     }
     
     double res = (double)orange / (double)total;
     cout << setprecision(6) << res*100 << "\n";
     
     
     
     
     
return 0;
}