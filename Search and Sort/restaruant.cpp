#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<array<int,2>> s;
	for(int i=0;i<n;i++) {
		int a,b;
		cin >> a >> b;
		s.insert({a,1});
		s.insert({b,-1});
	}
	int ans = 0, c=0;
	for(array<int,2> a:s) {
		c+=a[1];
		ans=max(c,ans);
	}
	cout << ans;
}
