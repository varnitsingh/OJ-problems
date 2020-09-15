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
     
     for(int i = 0; i < n; i++) {
     	cin >> A[i];
     }
     int max1 = INT_MIN;
     int curr = 0;
     
    int sum = 0;
    
    for(int i  : A) {
    	sum += i;
    }
    
     
     // invert the array
     
     for(int i = 0 ; i < n; i++) {
     	A[i] *= -1;
     }
     
     // min. sum subarray in original --> max. sum in inverted array
     bool flag = 0;
     for(int i :  A ) {
     	if(A[i] < 0) {flag =1; break;}
     }
     if(flag == 0) {
     	cout << *min_element(A.begin(), A.end()) *  -1 << "\n";
     	return 0;
     }
     
     
     for(int i : A) {
     	curr += i;
     	max1 = max(max1, curr);
     	if(curr < 0) {
     		curr = 0;
     	}
     }
     ll ans = sum + max1;
     
     cout << ans << "\n";
     

     
     
     
     
     
return 0;
}