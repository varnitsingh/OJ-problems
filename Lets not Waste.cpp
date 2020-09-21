
// Problem: Lets not Waste
// Contest: CodeChef - Code-o-Fiesta
// URL: https://www.codechef.com/CFSA2020/problems/COFSQ2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
     
     ll a,b;
     cin >> a >> b;
     
     if(a % 2 != 0  ||  (a > (b * 2)) || a < b) {
     	cout << "-1\n"; return 0;
     }
     
     ll diff = a - b;
     ll tots = 0;
     b -= diff;
     a -= 2 * diff;
     tots += 120 * diff;
     if( a != b) {
     	cout << "-1\n"; return 0;
     }
     tots += 220 * (a/2);
     
     cout << (a/2) << " " << diff << "\n";
     cout << "Rs. ";
     cout << tots << "\n";
     
     
     
     
return 0;
}