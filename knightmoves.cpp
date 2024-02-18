#include <bits/stdc++.h>

using namespace std;

long long int combinatoric(int n) {
    long long int num1 = n*n;
    long long int num2 = n*n-1;
    return (num1*num2)/2;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long int comb = combinatoric(i);
        int k = ((i * 2 - 2) * (i-2)) * 2;
        cout << comb - k << endl;
    }
    return 0;
}