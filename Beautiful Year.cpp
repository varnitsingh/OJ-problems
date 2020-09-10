
// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round #166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
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

bool diffDigits(int n) {
	int arr[11];
	for(int i = 0 ; i < 11; i++) 
		arr[i] = 0;
	int digit ;
	while(n != 0) {
		arr[n%10]++;
		if(arr[n% 10] > 1) return false;
		n = n/10;
	}
	
return true;
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int n;
     cin >> n;
     

     for(int i = n+1; i <= INF; i++) {
     	if(diffDigits(i)) {
     		cout << i << "\n"; break;
     	}
     }
     
     
     
     
     
return 0;
}