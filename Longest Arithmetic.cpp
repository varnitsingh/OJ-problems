
// Problem: Longest Arithmetic
// Contest: Google Coding Competitions - Round E 2020 - Kick Start 2020
// URL: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed
// Memory Limit: 1024 MB
// Time Limit: 20000 ms
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
     int tt;
     cin >> tt;
     for(int t = 1; t <= tt; t++) {
     	
     	int n;
     	cin >> n;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	int cnt = 1;
     	int max_cnt = INT_MIN;
     	int diff = A[1] - A[0];
     	int curr = 0;
     	for(int i = 2; i < n; i++) {
     		curr = A[i] - A[i-1];
   			max_cnt = max(max_cnt, cnt);     		
     		if(diff == curr) {
     			cnt++;
     		}
     		else {
     			diff = curr;

     			cnt = 1;
     		}
     		
     	}
		max_cnt = max(max_cnt, cnt);
		
		cout << "Case #" << t << ": " << max_cnt + 1 << "\n";
     	
     	
     	
     }
     
     
     
     
     
return 0;
}