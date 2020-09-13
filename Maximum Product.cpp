
// Problem: B. Maximum Product
// Contest: Codeforces - Codeforces Round #670 (Div. 2)
// URL: https://codeforces.com/contest/1406/problem/B
// Memory Limit: 512 MB
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
     int t;
     t = 1;
     cin >> t;
     while(t--) {
     	int n;
     	cin >> n;
     	vl A(n);
     	
     	for(int i = 0 ; i < n; i++ ) {
     		cin >> A[i];
     	}
     	
		sort(A.begin(), A.end());
		
		ll pdt1, pdt2, pdt3, pdt4, pdt5, pdt6;
		
		pdt1 = A[0] * A[1] * A[n-1] * A[n-2] * A[n-3];
		
		pdt2 = A[0] * A[n-1] * A[n-2] * A[n-3] * A[n-4];
		
		pdt3 = A[0] * A[1] * A[2] * A[n-1] * A[n-2];
		
		pdt4 = A[0] * A[1] * A[2] * A[3] * A[n-1];
		
		pdt5 = A[0] * A[1] * A[2] * A[3] * A[4];
		
		pdt6 = A[n-1] * A[n-2] * A[n-3] * A[n-4] * A[n-5];
		
		cout << max(pdt1, max(pdt2, max(pdt3, max(pdt4, max(pdt5, pdt6))))) << "\n";
     	
     	
     	
     	
     	
     }
     
     
     
     
     
return 0;
}