#include <iostream>

/**
 *  CCC '14 J1 - Triangle Times
 *  saucy
 *  4/2/2020
**/

int main(){
    int a,b,c; std::cin >> a >> b >> c;
    if (a + b + c != 180){
        std::cout << "Error";
        return 0;
    }
    if (a == b & b == c){
        std::cout << "Equilateral";
    }
    else if (a == b || a == c || b == c){
    std::cout << "Isosceles";
    } 
    else {
        std::cout << "Scalene";
    }
    return 0;

}
