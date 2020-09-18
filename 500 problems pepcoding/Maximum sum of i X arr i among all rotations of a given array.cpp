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
//     cin >> t;
     while(t--) {
     	
     	int n;
     	cin >> n;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	// 8 3 1 2  ===>>> 8 * 0  + 3 * 1 + 1 * 2 + 2 * 3 - (sum) + (n-1) * 
     	// 3 1 2 8 =====>>> 8 * 3 + 3 * 0 + 1 * 1 + 2  * 2
     	int sum = 0;
     	for(int i : A ) {
     		sum += i;
     	}
     	
     	int curr_val = 0;
     	for(int i = 0; i < n; i++) {
     		curr_val += i * A[i];
     	}
     	int res = curr_val;
     	int next;
     	for(int i = 1; i < n; i++) {
     			next = curr_val - (sum - A[i-1]) + (A[i-1] * (n-1) );
     			curr_val = next;
     			res = max(res, next);
     	}
     	cout << res << "\n";
     	
     	
     }
     
     
     
     
     
return 0;
}