#include <iostream>
#include <vector>
#include <algorithm>


/**
 *  ListMinimum
 *  saucy
 *  5/5/2020
**/


int size;
std::vector<int> list;

int main(){
	std::cin >> size;
	for (auto i = 0; i < size; i++){
		int v = 0;
		std::cin >> v;
		list.push_back(v);
	}
	for (auto x : list){
		std::sort(list.begin(),list.end(), std::greater<int>());
		std::cout << list.back() << '\n';
		list.pop_back();
	}
	return 0;
}