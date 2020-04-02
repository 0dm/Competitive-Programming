#include <iostream>

/**
 *  CCC '11 S2 - Speed fines are not fine!
 *  saucy
 *  4/2/2020
**/

int main(){
	std::cin.tie(nullptr);
    int limit,speed;
    std::cin >> limit >> speed;
	int diff = speed - limit;
    if(speed > limit){
        if (diff <=20){
            std::cout << "You are speeding and your fine is $100.";
        }
        else if (diff <= 30){
            std::cout << "You are speeding and your fine is $270.";
        }
        else{
            std::cout << "You are speeding and your fine is $500.";
        }
    }
    else{
        std::cout << "Congratulations, you are within the speed limit!";
    }
	return 0;
}
	