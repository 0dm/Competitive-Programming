#include <bits/stdc++.h>

/* 
1.
    input: 6 2 1 2
    6 rides planned
    2 covered by m ticket
    $1 for ride ticket
    $2 for m ticket
    minimum: $6 ($6 for 6 normal tickets | $6 for 3 $2 m tickets)
    output: 6

2. 
    input: 5 2 2 3
    5 rides planned
    2 covered by m ticket
    $2 for normal ticket
    $3 for m ticket
    minimum: 
        $6 for m tickets (2 $3 tickets covers 4 rides)
        $2 for the last ride (5th ride)
        $8 total
    output: 8
*/

int main() {
    int n; // rides planned
    int m; // rides covered by m ticket
    int b; // price of ride ticket
    int a; // price of m ticket

    std::cin >> n >> m >> a >> b;

    if (m * a <= b)
        std::cout << n * a;
    else 
        std::cout << n / m * b + std::min(n % m * a, b); 
        
    return 0;
}