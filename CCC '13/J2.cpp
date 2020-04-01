#include <iostream>
#include <string>

/**
 *  Rotating letters - CCC '13 J2 - Rotating letters
 *  saucy
 *  3/7/2020
**/

using namespace std;

string check(string title) {
    for (int i = 0; i < title.length(); i++) {
        char a = title.at(i);
        if (a != 'I' && a != 'O' && a != 'S' && a != 'H' && a != 'Z' && a != 'X' && a != 'N') {
            return "NO";
        }
    }
    return "YES";
}
    int main() {
    string title;
    cin >> title;
    cout << check(title);
    return 0;
}