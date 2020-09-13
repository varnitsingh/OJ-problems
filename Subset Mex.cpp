
// Problem: A. Subset Mex
// Contest: Codeforces - Codeforces Round #670 (Div. 2)
// URL: https://codeforces.com/contest/1406/problem/0
// Memory Limit: 512 MB
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
     cin >> t;
     while(t--) {
     	int n;
     	cin >> n;
     	vi A(n);
     	
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	unordered_map<int,int> mp;
     	
     	for(int a: A) {
     		mp[a]++;
     	}
     	
     	set<int> set1, set2;
     	
     	for(int i = 0 ;i < n; i++) {
     		if(set1.find(A[i]) == set1.end()) {
     			set1.insert(A[i]);
     		}
     		else {
     			set2.insert(A[i]);
     		}
     	}
     	
     	int sum = 0;
     	vi AA, BB;
     	for(auto x : set1) {
     		AA.PB(x);
     	}
     	for(auto x: set2) {
     		BB.PB(x);
     	}
     	
     	bool flag = 0;
     	for(int i = 0 ; i < AA.size(); i++) {
     		if(AA[i] != i) {
     			flag = 1; sum += i; break;
     		}
     		
     	}
     	if(flag == 0) {
     		sum += AA.size();
     	}
		flag = 0;
     	for(int i = 0 ; i < BB.size(); i++) {
     		if(BB[i] != i) {
     			flag = 1; sum += i; break;
     		}
     		
     	}
     	if(flag == 0) {
     		sum += BB.size();
     	}
     	
     	cout << sum << "\n";
     
     
     }
     
     
return 0;
}