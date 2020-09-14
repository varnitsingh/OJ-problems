
// Problem: A. Dead Pixel
// Contest: Codeforces - Codeforces Round #623 (Div. 2, based on VK Cup 2019-2020 - Elimination Round, Engine)
// URL: https://codeforces.com/contest/1315/problem/A
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
     	int a,b,x,y;
     	cin >> a >> b >> x >> y;
     	
     	x++; y++;
     	
     	ll aa = a * (y - 1);
        ll bb = a * abs(b - y);
        ll cc = b * (x - 1);
        ll dd = b * abs(a - x);
     	
     	
     	cout << max(aa, max(bb, max(cc, dd))) << "\n";
     }
     
     
     
     
     
return 0;
}