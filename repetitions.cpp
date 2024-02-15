#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    
    int best, current;
    cin >> s;
    current = 1;
    best = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != s[i - 1])
        {
            best = max(best, current);
            current = 0;
        }
        current++;
    }
    best = max(best,current);
    cout << best;
    return 0;
}