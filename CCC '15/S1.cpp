#include <iostream>
#include <vector>

/**
 *  CCC '15 S1 - Zero That Out
 *  saucy
 *  3/6/2020
**/

using namespace std;

int main(){
    int k,x;
    vector<int> n;
    cin >> k;
    for (int i = 0; i < k; i++){
        cin >> x;
        if (x == 0){
            n.pop_back();
        } else
            n.push_back(x);
    }
    int d = 0; for (int c : n) d += c;
    cout << d;
    return 0;
}