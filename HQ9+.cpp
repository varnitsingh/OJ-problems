
// Problem: A. HQ9+
// Contest: Codeforces - Codeforces Beta Round #96 (Div. 2)
// URL: https://codeforces.com/problemset/problem/133/A
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
     
    string s;
    cin >> s;
    bool flag = 0;
    for(auto c : s)  {
    	
    	if(c == 'H' or c == 'Q' or c == '9')   {
    		cout << "YES\n";
    		flag = 1;
    		break;
    	}
    }
    if(!flag) {
    	cout << "NO\n";
    }
     
     
     
     
     
return 0;
}