#include <bits/stdc++.h>

/**
 *  CCC '11 S2 - Multiple Choice
 *  saucy
 *  4/2/2020
**/

int main(){
	int N,score = 0;
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
	std::cin >> N;
	char IN[N], ANS[N];
	for (int i = 0; i < N; i++){
		std::cin >> IN[i];
	}
	for (int x = 0; x < N; x++){
		std::cin >> ANS[x];
			if (ANS[x] == IN[x]){
			score++;
		}
	}
	std::cout << score << '\n';
	return 0;
}

	