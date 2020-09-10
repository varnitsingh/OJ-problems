
// Problem: A. I_love_%username%
// Contest: Codeforces - Codeforces Round #109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/155/A
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
     
     for(int i = 0 ; i < n; i++) cin >> A[i];
     
     int minarr[n+1];
     minarr[0] = A[0];
     
     for(int i = 1; i < n; i++) {
     	minarr[i] = min(A[i], minarr[i-1]);
     }
     int maxarr[n+1];
     maxarr[0] = A[0];
     for(int i = 1; i < n; i++) {
     	maxarr[i] = max(maxarr[i-1], A[i]);
     }
     int cool = 0;
     for(int i = 1; i < n; i++) {
     	if(A[i] < minarr[i-1]) {
     		cool++;
     	}
     	if(A[i] > maxarr[i-1]) {
     		cool++;
     	}
     }
     cout << cool << "\n";
     
     
     
     
     
return 0;
}