#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5;
array<int,2> a[mxN];

int main() {
	int n;
	int target;
	cin >> n >> target;

	for (int i=0; i<n; i++) {
		cin >> a[i][0];
		a[i][1] = i+1;
	}

	sort(a,a + n);

	int i = 0, j = n-1;
	while (i<j) {
		if (a[i][0] + a[j][0] > target) {
			j--;
		} else if (a[i][0] + a[j][0] < target) {
			i++;
		} else if (a[i][0] + a[j][0] == target) {
			cout << a[j][1] << " " << a[i][1];
			return 0;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}