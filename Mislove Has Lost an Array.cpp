
// Problem: B. Mislove Has Lost an Array
// Contest: Codeforces - Codeforces Round #581 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1204/B
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
     
     int n, l, r;
     cin >> n >> l >> r;
     
     int minsum = 0;
     int maxsum = 0;
     
     
     for(int i = 1 ; i <= l-1; i++ ) {
     		minsum += pow(2, i);
     }
     for(int i = 0 ; i <= n-l; i++) {
     	minsum++;
     }
     for(int i = 0; i < r; i++) {
     	maxsum += pow(2, i);
     }
     for(int i = r; i < n; i++) {
     	maxsum += pow(2, r-1);
     }

     
     cout << minsum << " " << maxsum << "\n";
     
     
     
     
     
return 0;
}