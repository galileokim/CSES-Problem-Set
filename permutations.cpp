#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int num;
	cin >> num;

	if (num == 1) {
		cout << 1;
		return 0;
	}

	if (num <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}

	if (num == 4) {
		cout << 2 << " " << 4 << " " << 1 << " " << 3;
		return 0;
	}

	if (num % 2 == 0) {
		long long int e = num;
		while (e >= 2) {
			cout << e << " ";
			e -= 2;
		}
		long long int o = num - 1;
		while (o >= 1) {
			cout << o << " ";
			o -= 2;
		}
	}

	if (num % 2 != 0) {
		long long int e = num - 1;
		while (e >= 2) {
			cout << e << " ";
			e -= 2;
		}
		long long int o = num;
		while (o >= 1) {
			cout << o << " ";
			o -= 2;
		}
	}

	return 0;
}