#include <iostream>

using namespace std;

int main(){
    int n;
    bool hard;
    cin >> n;
    for (int i; i < n; i++){
        cin >> hard;
        if (hard){
            cout << "HARD";
            return 0;
        }
        
    }
        cout << "EASY";
        return 0;
}