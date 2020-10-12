#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int max = 0, a = 0, b = 0, sum = 0, st = 0;
    cin >> st;
    for (int i = 0; i < st; i++) {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > max) {
            max = sum;
        }
    }
    cout << max;
}