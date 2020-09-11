
// Problem: B. Decoding
// Contest: Codeforces - Codeforces Round #386 (Div. 2)
// URL: https://codeforces.com/problemset/problem/746/B
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
     
     int n;
     cin >> n;
     string s;
     cin >> s;
	if(n % 2 != 0)     {
		
	
     for(int i = n- 2; i >= 0; i -= 2 ) {
     	cout << s[i];
     }
     
     for(int i = 0 ; i < n ; i = i+2) {
     	cout << s[i];
     }
     cout << "\n";
    } 
    else {
 	for(int i = n- 2; i >= 0; i -= 2 ) {
     	cout << s[i];
     }
     
     for(int i = 1 ; i < n ; i = i+2) {
     	cout << s[i];
     }
     cout << "\n";
    } 
     
return 0;
}