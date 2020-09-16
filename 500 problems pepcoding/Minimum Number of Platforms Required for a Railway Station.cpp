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
    	
    	vi arr(n), dep(n);
    	
    	for(int i = 0 ; i < n; i++) {
    		cin >> arr[i];
    	}
    	for(int i = 0 ; i < n; i++) {
    		cin >> dep[i];
    	}
    	sort(arr.begin(), arr.end());
    	sort(dep.begin(), dep.end());
    	
    	int i = 0, j = 0;
    	int result = INT_MIN;
    	int platform = 0;
    	while(i < n and  j < n) {
    		if(arr[i] <= dep[j]) {
    			platform++;
    			i++;
    		}
    		else if(dep[j] < arr[i]) {
    			platform--;
    			j++;
    		}
    		
    		if(result < platform) {
    			result = platform;
    		}
    		
    	}
    	
     	
     	cout << result << "\n";
     }
     
     
     
     
     
return 0;
}