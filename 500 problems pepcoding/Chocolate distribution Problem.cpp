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
     	
     	int n, m;
     	cin >> n >> m;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	sort(A.begin() , A.end());
     	
     	// problem reduced to finding subarray of size m, with minimum 
     	//difference between first and last element
     	
     	int l = 0;
     	int r = m-1;
     	
     	int l_f = 0, r_f = 0;
     	int mindiff = INT_MAX;
     	while(l <= r and r < n and l >= 0) {
     		if(A[r] - A[l] < mindiff) {
     			l_f = l;
     			r_f = r;
     			mindiff = A[r] - A[l];
     		}
     		l++; r++;
     	}
     	cout << mindiff << "\n";
     	
     	
     	
     	
     	
     	
     }
     
     
     
     
     
return 0;
}