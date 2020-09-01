
// Problem: Prime Path
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/PPATH/
// Memory Limit: 1536 MB
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

vi adj[10001];
vi primes;
bool vis[10001];
int length[10001];

bool isValid(int a, int b) {
	int cnt = 0;
	int dig1, dig2;
	while(a != 0) {
		dig1 = a%10;
		dig2 = b%10;
		
		a = a/10;
		b = b/10;
		
		if(dig1 != dig2) {
			cnt++;
		}
	}
	if(cnt == 1) return true;
	
return false;
}

bool isPrime(int n) {
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
return true;
}

void buildGraph() {
	for(int i = 1000; i <= 9999; i++) {
		if(isPrime(i)) {
			primes.PB(i);
		}
	}
	
	for(int i = 0; i < (int)primes.size(); i++) {
		for(int j = i+1; j < (int)primes.size(); j++) {
			if(isValid(primes[i], primes[j])) {
				
				adj[primes[i]].PB(primes[j]);
				adj[primes[j]].PB(primes[i]);
			}
		}
	}
	
}
void bfs(int node) {
	vis[node] = 1;
	length[node] = 0;
	
	queue<int> q;
	q.push(node);
	int curr;
	while(!q.empty()) {
		curr = q.front(); q.pop();
		
		for(int child : adj[curr]) {
			if(!vis[child]) {
				length[child] = length[curr] + 1;
				vis[child] = 1;
				q.push(child);
			}
		}
	}
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int t;
     int a, b;
     cin >> t;
     buildGraph(); // creating graph with connecting all the 4 digit numbers which remain prime after changing one digit
     
     while(t--) {
     	cin >> a >> b;
     	
     	for(int i = 1000; i <= 9999; i++) {
     		length[i] = -1;
     		vis[i] = 0;
     	}
     	
     	bfs(a);
     	if(length[b] == -1) {
     		cout << "Impossible\n";
     	}
     	else {
     		cout << length[b] << "\n";
     	}
     	
     }
     
     
     
     
     
return 0;
}