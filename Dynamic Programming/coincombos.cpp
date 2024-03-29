#include <bits/stdc++.h>
using namespace std;

const int mxN=100, mxX=1e6, M=1e9+7;
int n,c[mxN],x;
long long dp[mxX+1];

int main() {
	cin >> n >> x;
	for (int i=0; i<n; i++) {
		cin >> c[i];
	}
	dp[0] = 1;
	for (int i=1; i<=x;i++) {
		for(int j=0; j<n; j++) {
			if (c[j]<=i) {
				dp[i] = (dp[i] + dp[i-c[j]])%M;
			}
		}
	}
	cout << dp[x];
}
