
// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
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
     string s;
     cin >> s;
     int r = 0, g = 0, b = 0;
 	for(int i=1;i<n;i++){
 		
 		if(s[i-1] == s[i])
 			if(s[i]=='R')++r;
 			else if(s[i]=='G'){
 					++g;
 				}			
 		else if(s[i]=='B')
 			++b;
 }
 cout<<r+g+b;
return 0;
}