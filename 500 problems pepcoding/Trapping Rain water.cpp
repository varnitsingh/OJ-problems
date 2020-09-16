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

using namespace std;

int main()
{
 	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vi A(n);
	    for(int i = 0 ; i < n; i++) {
	        cin >> A[i];
	    }
	    vi left(n), right(n);
	    
	    left[0] = A[0];
	    right[n-1] = A[n-1];
	    
	    for(int i = 1 ;i  < n; i++) {
	        left[i] = max(left[i-1], A[i]);
	    }
	    for(int i = n-2; i>= 0; i--) {
	        right[i] = max(right[i+1], A[i]);
	    }
	    
	    int result = 0;
	    
	    for(int i = 0; i < n; i++) {
	        result += min(left[i], right[i]) - A[i];
	    }
	    cout << result << "\n";
	}

return 0;
}