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

int binary_search(vi A, int n, int target, int l, int r) {
	int mid = l + (r - l)/2;
	
	if(A[mid] == target) {
		return mid;
	}
	if(A[mid > target]) {
		return binary_search(A, n, target, l, mid-1);
	}
	if(A[mid < target]) {
		return binary_search(A, n, target, mid+1, r);
	}
	
return -1;
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t;
     t = 1;
     cin >> t;
     while(t--) {
     	
     	int n, target;
     	cin >> n >> target;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	cout << binary_search(A, n, target, 0, n-1) << "\n";
     	
     	
     	
     	
     }
     
     
     
     
     
return 0;
}