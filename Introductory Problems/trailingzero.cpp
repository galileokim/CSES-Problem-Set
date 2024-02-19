#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
    
	if (n < 5) {
		cout << 0;
		return 0;
	}

	int count = 0;
	for (int i = 5; n / i >= 1; i *= 5) {
		count += n / i;
	}

	cout << count;

	return 0;
}
