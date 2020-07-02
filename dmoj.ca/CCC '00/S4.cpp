#include <iostream>
#include <algorithm>
#include <climits>

/**
 *  Golf - CCC '00 S4 - Golf
 *  saucy
 *  4/1/2020
**/

int main(){
    std::ios_base::sync_with_stdio(false);
	int dist, n, x;
	std::cin >> dist;
	int club[dist+1];
	for (int i = 0; i <= dist; i++){
		club[i] = INT_MAX;
	}
	club[0] = 0;
	std::cin >> n;
	std::sort(club, club+n);
	for (int i = 0; i < n; i++){
	std::cin >> x;
		for (int a = 0; a <= dist-x; a++){
			if (club[a] != INT_MAX){
				club[a+x] = std::min(club[a]+1, club[a+x]);
			}
		}
	}
	if (club[dist] == INT_MAX){
		printf("Roberta acknowledges defeat.");
	}
	else {
		printf("Roberta wins in %i strokes.", club[dist]);
	}
	return 0;
}