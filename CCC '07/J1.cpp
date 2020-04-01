#include <iostream>

/**
 *  Who is in the Middle? - CCC '07 J1 - Who is in the Middle? - Yes I know I could have used an array...
 *  saucy
 *  3/7/2020
**/

using namespace std;

int a,b,c;

int middle(int a, int b, int c){
return (a > b) & (a < c) ? a: (b > a) & (b < c) ? b: (c > a) & (c < b) ? c: (c > b) & (a > c) ? c: (b > c) & (a > b) ? b: (a > c) & (c < b) ? a: b;
}

int main(){
    cin >> a >> b >> c;
    cout << middle(a, b, c);
    return 0;
}