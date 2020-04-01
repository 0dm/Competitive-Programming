#include <iostream>
#include <math.h>

/**
 *  Squares- CCC '04 J1 - Squares
 *  saucy
 *  3/6/2020
**/

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "The largest square has side length " << floor(sqrt(n)) << "." << endl;
    return 0;
}