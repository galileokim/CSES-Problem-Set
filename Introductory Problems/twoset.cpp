#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	if (n == 1 || n == 2) {
		cout << "NO";
		return 0;
	}
	long long int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += i;
	}
	if (ans % 2 != 0) {
		cout << "NO";
		return 0;
	}
	long long int s = ans/2;

	vector<long long int> nums(n);

	for (long long int i = 0; i < n; i++) {
		nums[i] = i + 1;
	}

	long long int target = 0;
	vector<long long int> set;
	while (target != s) {
		if (target + nums.back() <= s) {
			target += nums.back();
			set.push_back(nums.back());
			nums.erase(nums.begin() + nums.back() - 1);
		} else if (target + nums.back() > s) {
			long long int n = s - target;
			target += n;
			set.push_back(n);
			nums.erase(nums.begin() + (n - 1));
		}
	}

    cout << "YES" << endl;
	cout << set.size() << endl;

	for (vector<long long int>::size_type i = 0; i < set.size(); i++) {
		cout << set[i] << " ";
	}

	cout << endl;

	cout << nums.size() << endl;

	for (vector<long long int>::size_type i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
}