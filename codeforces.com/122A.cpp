#include <iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int x;
    cin >> x; // 1 < n < 1000
    int ln[12] = {4, 7, 44, 47, 74, 444, 447, 474, 477, 744, 747, 777};
    for (int i = 0; i < 12; i++){
        if (x % ln[i] == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
