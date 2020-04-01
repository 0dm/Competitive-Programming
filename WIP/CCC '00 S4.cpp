#include <iostream>

/**
 *  Golf - CCC '00 S4 - Golf
 *  saucy
 *  3/6/2020
**/


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int dist, clubs, n;
    cin >> dist;
    cin >> clubs;
    for (int i; i < clubs; i++) {
        cin >> n;
        dist = dist - n;
    }
    dist == 0 ? cout << "Roberta wins in " << clubs << " strokes." : cout << "Roberta acknowledges defeat.";
    return 0;
}