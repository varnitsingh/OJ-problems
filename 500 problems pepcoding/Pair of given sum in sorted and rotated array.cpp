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
     	
     	int n, sum;
     	cin >> n >> sum;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	// first, we need to find pivot.
     	
     	int l = 0, r = n-1;
     	int mid = 0;
     	if(A[0] < A[n-1]) {
     		l = 0; r = n-1;
     	}
     	else while(true) {
     		mid = l + (r-l)/2;
     		// 4 5 6 1 2
     		if(mid != n-1 and A[mid] > A[mid+1]) {
     			l = mid + 1;
     			r = mid;
     			break;
     			
     		}
     		else {
     			if(A[mid] > A[n-1]) {
     				l = mid+1;
     				
     			}
     			else {
     				r = mid-1;
     			}
     			
     		}
     		
     		
     	}
     	
     	//  Now, just have to apply 2 pointer.
     	
     	l = mid+1;
     	r = mid;
     	int s = 0;
     	while(l >= 0 and r <= n) {
     		s = A[l] + A[r];
     		
     		if(s == sum) {
     			cout << l << " " << r << "\n"; return 0;
     		}
     		if(s < sum ) {
     			l++;
     		}
     		else {
     			r--;
     		}
     	}
    	cout << "-1\n";
     	
     	
     	
     }
     
     
     
     
     
return 0;
}