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
     	int n, k;
     cin >> n >> k;
     vi A(n);
     for(int i = 0 ; i < n; i++) {
     	cin >> A[i];
     }
     
     int l = 0, r = 0;
     
     
     int curr_sum = A[0];
     bool flag = 0;
     for(int i = 1 ; i <= n; i++) {
     	while(curr_sum > k and l < i-1) {
     		curr_sum -= A[l];
     		l++;
     	}
     	if(curr_sum == k) {
     		cout << l + 1  << " " << i << "\n";
     		flag =1;
     		break;
     	}
     	
     	if(i < n) {
     		curr_sum += A[i];
     	}
     	
     	}
     	if(!flag)
     	cout << "-1\n";
     }
     
return 0;
}