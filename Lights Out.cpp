
// Problem: A. Lights Out
// Contest: Codeforces - Codeforces Round #168 (Div. 2)
// URL: https://codeforces.com/problemset/problem/275/A
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
     
     int A[3][3];
     
     for(int i = 0; i < 3; i++) {
     	for(int j = 0; j < 3; j++) {
     		cin >> A[i][j];
     	}
     }
     bool B[3][3];
     memset(B, 1, sizeof(B));
     
     for(int i = 0; i < 3; i++) {
     	for(int j = 0; j < 3; j++) {
     		if(A[i][j] % 2 != 0) {
     			
     			B[i][j] = B[i][j] ^ 1;
     			if(i+1 < 3)
     			B[i+1][j] = B[i+1][j] ^ 1;
     			if(i-1 >= 0)
     			B[i-1][j] = B[i-1][j] ^ 1;
     			if(j-1 >= 0)
     			B[i][j-1] = B[i][j-1] ^ 1;
     			if(j+1 < 3)
     			B[i][j+1] = B[i][j+1] ^ 1;
     			
     		}
     	}
     }
     for(int i = 0; i < 3; i++) {
     	for(int j = 0; j < 3; j++) {
     		cout << B[i][j];
     	}
     	cout << "\n";
     }
     
     
     
     
     
     
     
return 0;
}