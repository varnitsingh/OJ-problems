
// Problem: K-Concatenation
// Contest: CodeChef - January Challenge 2018
// URL: https://www.codechef.com/JAN18/problems/KCON/
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
     	int n, k;
     	cin >> n >> k;
     	vl A(n);
     	
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	ll sum = 0;
     	for(int i  : A) {
     		sum += i;
     	}
     	
     	vl B;
     	for(ll i : A) {
     		B.PB(i);
     	}
     	for(ll i : A) {
     		B.PB(i);
     	}
     	
     	ll max_in_two = LONG_MIN;
     	ll curr = 0;
     	
     	for(int i : B) {
     		curr += i;
     		max_in_two = max(max_in_two, curr);
     		
     		if(curr < 0 ) curr = 0;
     	}
     	if(k == 1) {
     		ll maxx = LONG_MIN, cur = 0;
     		for(ll i : A) {
     			cur += i;
     			maxx = max(maxx, cur);
     			if(cur < 0) cur = 0;
     		}
     		cout << maxx << "\n";
     	}
     	else if(sum < 0) {
     		cout << max_in_two <<  "\n";
     	}
     	else {
     		cout << max_in_two + (k-2) * sum << "\n";
     	}
     	
    }
     
     
     
     
return 0;
}