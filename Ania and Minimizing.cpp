
// Problem: B. Ania and Minimizing
// Contest: Codeforces - Codeforces Round #588 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1230/B
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
     
     int n, k;
     cin >> n >> k;
     
     string s;
     cin >> s;
     
     	if(n == 1 and k != 0)  {
     		cout << "0\n";
     	}
		else if(k == 0) {
			cout << s << "\n";
		}
		else {
			int cnt = 0;
			
			for(int i = 0; i <  n; i++) {
				if(i == 0 and s[i] != '1') {
					s[0] = '1';
					cnt++;
				}
				else {
					if(i != 0 and s[i] != '0') {
						s[i] = '0'; cnt++;
						
					}
				}
				if(cnt == k) break;	
			}
			
			cout << s << "\n";
			
		}
		
     
     
     
     
     
     
return 0;
}