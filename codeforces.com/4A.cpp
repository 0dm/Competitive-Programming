#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    int w;
    std::cin >> w;
    if (w % 2 == 0 && w > 2)
        std::cout << "YES";
    else 
        std::cout << "NO";
}