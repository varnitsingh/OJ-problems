
// Problem: B. Watering System
// Contest: Codeforces - Codeforces Round #477 (rated, Div. 2, based on VK Cup 2018 Round 3)
// URL: https://codeforces.com/problemset/problem/967/B
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
     
     int n, A , B, cnt=0, total=0;
      cin >> n >> A >> B;
		int siz[n];

    for(int i = 0; i < n; i++){
    	
        cin >> siz[i];
        
        total += siz[i];
    }

    int first = siz[0];

    sort(siz+1 , siz+n);

    for(int i=n-1; i>0; i--){

        if(first * A / total >= B)
            break;

        total -= siz[i];
        cnt++;
    }

    cout<< cnt<< endl;
     
     
     
     
return 0;
}