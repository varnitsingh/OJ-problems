
// Problem: C. Bad Sequence
// Contest: Codeforces - Codeforces Round #583 (Div. 1 + Div. 2, based on Olympiad of Metropolises)
// URL: https://codeforces.com/problemset/problem/1214/C
// Memory Limit: 512 MB
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
     
     int r=0,l=0,n;
    char c;
    int cnt=0;
    scanf("%d",&n);
    getchar();
    while(scanf("%c",&c)==1&&c!='\n')
    {   
        if(c=='(') l++;
		if(c==')')
            if(l==0) r++;
            else l--;
    }
    if((l==0&&r==0)||(l==1&&r==1))
        printf("Yes");
    else printf("No");
    return 0;
     
     
     
     
     
return 0;
}