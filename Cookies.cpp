
// Problem: A. Cookies
// Contest: Codeforces - Codeforces Beta Round #94 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/129/A
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
     
     for(int i = 0; i < n; i++) {
     	cin >> A[i];
     }
	int sum = 0;
	for(auto x: A) {
		sum += x;
	}
	int even = 0, odd = 0;
	for(auto x : A) {
		if(x % 2 == 0) {
			even++;
		}
		else odd++;
	}
	if(sum % 2 == 0) {
		cout << even << "\n";
	}
	else {
		cout << odd << "\n";
	}
     
     
     
     
     
return 0;
}