
// Problem: B. Keyboard Layouts
// Contest: Codeforces - Codeforces Round #424 (Div. 2, rated, based on VK Cup Finals)
// URL: https://codeforces.com/problemset/problem/831/B
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
     
     
     string a, b;
     cin >> a >> b;
     
     string c;
     cin >> c;
     
     unordered_map<char, int> mp;
     
	for(int i = 0 ; i < a.length(); i++) {
		mp[a[i]] = i;
	}
	for(char ch : c)  {
		if(isupper(ch)) {
			
			ch =tolower(ch);
			char ne = b[mp[ch]];
			ne = toupper(ne);
			cout << ne;
			
		}
		else if(isalpha(ch))
		cout << b[mp[ch]];
		else
		cout << ch ;
	}
	cout << "\n";
     
     
     
     
return 0;
}