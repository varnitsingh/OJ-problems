
// Problem: A. Juggling Letters
// Contest: Codeforces - Codeforces Round #666 (Div. 2)
// URL: https://codeforces.com/contest/1397/problem/A
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
     	int n;
     	cin >> n;
     	string s;
     	unordered_map<int, int> mp;
     	for(int i = 1; i <= n; i++) {
     		cin >> s;
     		for(auto c : s) {
     			mp[c]++;
     		}
     	}
     	bool flag = 0;
		for(auto x : mp) {
			if(x.second % n != 0) {
				cout << "NO\n";
				flag =1;
				break;
			}
			
		}
		if(flag) continue;
		
		cout << "YES\n";
     	
     	
     	
     }
     
     
     
     
     
return 0;
}