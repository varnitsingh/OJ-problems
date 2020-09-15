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
     for(int i = 0 ; i < n; i++) {
     	cin >> A[i];
     }
     bool flag = 0;
     
     // 0 means  '<'
     // 1 means '>'
     // toggle and swap every time
     
     
     for(int i = 0 ; i < n-1; i++) {
     	
     	if(!flag) {
     		if(A[i] > A[i+1]) {
     			swap(A[i], A[i+1]);
     		}
     	}
     	else {
     		if(A[i] < A[i+1]) {
     			swap(A[i], A[i+1]);
     		}
     	}
     	flag = !flag;
     }
     
     for(int i : A) {
     	cout << i << " ";
     }
     cout << "\n";
     
     
     
     
return 0;
}