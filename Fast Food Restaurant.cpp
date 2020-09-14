
// Problem: A. Fast Food Restaurant
// Contest: Codeforces - Codeforces Round #622 (Div. 2)
// URL: https://codeforces.com/contest/1313/problem/A
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
     	int a, b, c;
     	cin >> a >> b >> c;
     	
     	if (a<b) swap(a,b);
        if (a<c) swap(a,c);
        if (b<c) swap(b,c);
        
        int ans=0;
        if (a) ans++,a--;
        if (b) ans++,b--;
        if (c) ans++,c--;
        if (a&&b) ans++,a--,b--;
        if (a&&c) ans++,a--,c--;
        if (b&&c) ans++,b--,c--;
        if (a&&b&&c) ans++,a--,b--,c--;
        
        
        cout << ans << "\n";
     	
     	
     	
     }
     
     
     
     
     
return 0;
}