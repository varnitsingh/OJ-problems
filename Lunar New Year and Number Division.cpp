
// Problem: C. Lunar New Year and Number Division
// Contest: Codeforces - Codeforces Round #536 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1106/C
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
     vl A(n);
     
     for(int i = 0; i < n; i++) {
     	cin >> A[i];
     	}
     
     
     ll sum = 0;
     sort(A.begin(), A.end());
     for(int i = 0; i < n/2; i++) {
     	sum += ((A[i]  + A[n-1-i]) * (A[i]  + A[n-1-i]) );
     }
     cout << sum << "\n";
     
     
     
     
     
return 0;
}