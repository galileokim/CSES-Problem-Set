#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long int a,b;
		cin >> a >> b;
		if ((a+b) % 3 != 0) {
			cout << "NO" << endl;
		} else if (a > b * 2 || b > a * 2) {
			cout << "NO" << endl;
		} else {
			cout <<"YES" << endl;
		}
	}
	return 0;
}