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
     //cin >> t;
     while(t--) {
     	
     	int n;
     	cin >> n;
		int lowVal, highVal;
     	cin >> lowVal >> highVal;
     	
     	vi arr(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> arr[i];
     	}
     	
    int start = 0, end = n-1; 


	for (int i=0; i<=end;) 
	{ 
		
		if (arr[i] < lowVal) 
			swap(arr[i++], arr[start++]); 


		else if (arr[i] > highVal) 
			swap(arr[i], arr[end--]); 

		else
			i++; 
	} 
     
     
     for(int i : arr)	 {
     	cout << i << " ";
     }
     	
     	
     }
     
     
     
     
     
return 0;
}