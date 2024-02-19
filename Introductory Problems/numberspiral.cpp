#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long int x,y;
		cin >> y >> x;
		if (x >= y) {
			if (x % 2 != 0) {
				long long int xpos = x * x;
				cout << xpos - y + 1 << endl;
		} else {
			long long int xpos = x * x - 2 * x + 2;
			cout << xpos + y - 1 << endl;
		}
		}

		if (y > x) {
		if (y % 2 == 0) {
				long long int ypos = y * y;
				cout << ypos - x + 1 << endl;
		} else {
			long long int ypos = y * y - 2 * y + 2;
			cout << ypos + x - 1 << endl;
		}
	}
	}
	
	return 0;
}