
// Problem: A. Arrival of the General
// Contest: Codeforces - Codeforces Round #103 (Div. 2)
// URL: https://codeforces.com/problemset/problem/144/A
// Memory Limit: 256 MB
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
     
     int n; 
     cin >> n;
     vi A(n);
     
     for(int i = 0; i < n; i++) 
     	cin >> A[i];
     	
    int minpos = -1, maxpos = -1;
    int minel = INT_MAX , maxel = -1;
    
    for(int i = 0 ; i < n; i++) {
    	if(minel >= A[i]) {
    		minel = A[i];
    		minpos = i;
    	}
    	if(maxel < A[i]) {
    		maxel = A[i];
    		maxpos = i;
    	}
    }

	if(minpos > maxpos) {
		cout << n -1 - minpos + maxpos << "\n";
	}
	else {
		cout << n - minpos + maxpos - 2 << "\n";
	}
    
     
     
     
     
     
return 0;
}