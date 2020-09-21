
// Problem: Talksy Turvy
// Contest: CodeChef - Code-o-Fiesta
// URL: https://www.codechef.com/CFSA2020/problems/COFSQ1
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
vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}


int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     string s;
     
     getline(cin , s);
     
     string del = " ";
     
     vector<string> A = split(s, del);
     
     string temp;
     for(int i = 0 ;  i < A.size(); i++) {
     	temp = A[i];
     	
     	if(temp[0] == 'a' or temp[0] == 'e' or temp[0] == 'i' or temp[0] == 'o' or temp[0] == 'u') {
     		cout << temp << 'd';
     	}
     	else {
     		for(int i = 1 ; i < temp.length(); i++) {
     			cout << temp[i];
     		}
     		cout << temp[0];
     		cout << 'd';
     		
     	}
     	for(int j = 0 ; j <= i; j++) {
     		cout << "u";
     	}
     	
     	if(A.size() != 1)
     	cout << " ";
     	
     	
     }
     
     
     
     
     
     
     
return 0;
}