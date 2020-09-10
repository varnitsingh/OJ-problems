
// Problem: A. Nearly Lucky Number
// Contest: Codeforces - Codeforces Beta Round #84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/A
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

bool Lucky(int n) {
	if(n == 0) return false;
	while(n != 0) {
		if(n % 10 != 4 and n % 10 != 7) return false;
		
		n/= 10;
	}
return true;
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     string s;
     cin >> s;
     int c = 0;
     for(int i = 0; i < s.length(); i++) {
     	if(s[i] == '4' or s[i] == '7') c++;
     }
     
     if(Lucky(c)) {
     	cout << "YES\n";
     }
     else {
     	cout << "NO\n";
     }
     
     
return 0;
}