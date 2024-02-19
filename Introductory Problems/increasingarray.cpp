#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> array(num);
    long long numOfMoves = 0LL;

    for (int i = 0; i < num; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < num - 1; i++) {
        if (array[i] > array[i + 1]) {
            numOfMoves += (array[i] - array[i + 1]);
            array[i + 1] = array[i];
        }
    }

    cout << numOfMoves;

    return 0;
}