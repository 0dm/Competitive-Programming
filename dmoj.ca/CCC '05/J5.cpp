#include <iostream>
#include <string>

/**
 *  Bananas - CCC '05 J5 - Bananas
 *  saucy
 *  6/28/2020
**/

using namespace std;

bool isMonkey(string str){
	string word1 ("ANA");
	string word2 ("BAS"); 
	size_t x1 = str.find(word1);
	size_t x2 = str.find(word2);
	while(x1 != string::npos || x2 != string::npos){
		while(x1 != string::npos){
			str.replace(x1, word1.length(), "A");
			x1 = str.find("ANA");
		}
		while(x2 != string::npos){
			str.replace(x2, word2.length(), "A");
			x2 = str.find("BAS");
		}
		x1 = str.find("ANA");
		x2 = str.find("BAS");
	}
	return (str == "A");
}

int main(){
	ios_base::sync_with_stdio(false);
	string in;
	cin >> in;
	while (in != "X"){
		if (isMonkey(in)){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		cin >> in;
	}
}