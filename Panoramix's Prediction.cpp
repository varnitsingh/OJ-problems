
// Problem: A. Panoramix's Prediction
// Contest: Codeforces - Codeforces Beta Round #69 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/80/A
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

bool isPrime(int n) {
	if(n == 1) return false;
	if(n == 2) return true;
	
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
return true;
}

int nextPrime(int n) {
	for(int i = n+1; i < mod; i++) {
		if(isPrime(i)) {
			return i;
		}
	}
return -1;
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int n, m;
     cin >> n >> m;
     
     int next = nextPrime(n);
     if(next == m) {
     	cout << "YES\n";
     }
     else {
     	cout << "NO\n";
     }
     
     
     
     
     
return 0;
}