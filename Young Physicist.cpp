
// Problem: A. Young Physicist
// Contest: Codeforces - Codeforces Beta Round #63 (Div. 2)
// URL: https://codeforces.com/problemset/problem/69/A
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
     int t;
     t = 1;
     cin >> t;
     int x, y, z;
     int resx, resy, resz;
     resx = 0, resy = 0, resz = 0;
     while(t--) {
     	 
     	cin >> x >> y >> z;
     	
     	resx += x;
     	resy += y;
     	resz += z;
     	
     }
     if(resx == 0 and resy == 0 and resz == 0) {
     	cout << "YES\n";
     }
     else cout << "NO\n";
     
     
     
     
     
return 0;
}