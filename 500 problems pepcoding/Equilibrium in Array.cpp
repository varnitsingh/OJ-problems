#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n; 
	    cin >> n;
	    vi A(n+1);
	    
	    for(int i = 0 ; i < n; i++) cin >> A[i];
	    
	    ll prev = 0, next = 0;
	    
	    for(int i = 0 ; i < n; i++) next += A[i];
	    
	    int flag = 0;
	    
	    for(int i = 0; i < n; i++)
	    {
	        next -= A[i];
	        if(i != 0)
	        prev += A[i-1];
	        
	        
	        if(prev == next) {cout << i+1 << "\n"; flag = 1; break; }
	    }
	    if(flag == 0)cout << "-1\n";
	    
	}
	return 0;
}