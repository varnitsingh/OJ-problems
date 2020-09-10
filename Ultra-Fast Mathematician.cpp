
// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces - Codeforces Beta Round #57 (Div. 2)
// URL: https://codeforces.com/problemset/problem/61/A
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
     
     string s1, s2;
     cin >> s1;
     cin >> s2;
     
     for(int i = 0; i < s1.length(); i++) {
     	if(s1[i] == s2[i]) {
     		cout << 0;
     	}
     	else {
     		cout << 1;
     	}
     }
     cout << "\n";
     
     
     
     
     
return 0;
}