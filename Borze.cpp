
// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round #32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
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
	cin>>s;
	for(int i = 0 ; i < s.length(); i++) {
    	if(s[i]=='.'){
        cout<<0;
        continue;
    	}
    	if(s[i]=='-'&&s[i+1]=='.'){
        	cout<<1;
	        i++;
    	    continue;
    	}
    	if(s[i]=='-'&&s[i+1]=='-'){
        	 cout<<2;
         	i++;
    	}
}
     
     
     
return 0;
}