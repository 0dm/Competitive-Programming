#include<bits/stdc++.h>

/**
 *  It's Cold Here! - CCC '08 S1 - I
 *  saucy
 *  4/1/2020
**/

using namespace std;

int main(){
	vector<string> cities;
	vector<int> temps;
	
	int temp;
	string city;
	int pos;
	
	while (true){
		cin >> city >> temp;
		cities.push_back(city);
		temps.push_back(temp);
		if (city == "Waterloo"){
			break;
		}
	}
	int max = temps.size();
	int begin = temps[0];
	
	for (int i = 0; i < max; i++){
		if (temps[i] < begin){
			begin = temps[i];
		}
	}
	
	for (auto j : temps){
		if (j == begin){
			break;
		}
		else {
			pos++;
		}
	}
	cout << cities[pos];
}