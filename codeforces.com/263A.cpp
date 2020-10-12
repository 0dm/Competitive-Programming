#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    bool n = false;
    for (int r = 1; r < 6; r++) {
        for (int c = 1; c < 6; c++) {
            cin >> n;
            if (n) {
                cout << abs(r - 3) + abs(c - 3);
            }
        }
    }
}