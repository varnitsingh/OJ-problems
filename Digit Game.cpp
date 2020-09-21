
// Problem: A. Digit Game
// Contest: Codeforces - Codeforces Round #671 (Div. 2)
// URL: https://codeforces.com/contest/1419/problem/A
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
     int t;
     t = 1;
     cin >> t;
     while(t--) {
     	
     	int n;
     	cin >> n;
     	
     	string s;
     	cin >> s;
     	
     	int total_odd = 0, total_even = 0;
     	
     	int odd_on_even = 0, even_on_odd = 0;
     	
     	int dig;
     	for(int i = 0 ; i  < n; i++) {
     		dig = s[i] - '0';
     		
     		if(dig % 2 != 0){
     			total_odd++;
     			if((i + 1 )% 2 == 0) {
     				odd_on_even++;
     			}
     		}
     		else {
     			total_even++;
     			if((i+1) % 2 != 0) {
     				even_on_odd++;
     			}
     		}
     		
     	}
     	
     	//cout << total_odd << " " << total_even << " ";

     	while(total_odd != 0 and total_even != 0) {
     		     //	cout << odd_on_even << " " << even_on_odd << " ";
     		
     		if(even_on_odd  > 0) {
     			even_on_odd--;
     			total_even--;
     		}
     		else if(even_on_odd == 0) {
     			total_odd--;
     		}
     		if(total_even == 0 or total_odd == 0) {
     			break;
     		}
     		
     		if(odd_on_even > 0) {
     			odd_on_even--;
     			total_odd--;
     		}
     		else if(odd_on_even == 0) {
     			total_even--;
     		}
     		
     	}
     	if(total_odd > 0) {
     		cout << "1\n";
     	}
     	else {
     		cout << "2\n";
     	}
     	
     	
     	
     }
     
     
     
     
     
return 0;
}