#include <iostream>
/**
 *  Snakes and Ladders - CCC '03 S1 - Snakes and Ladders
 *  saucy
 *  3/5/2020
**/

using namespace std;

int tile = 1;
int transport;
bool playing = true;

int play(int input) {
    transport = 0;
    int old = tile;
    tile = tile + input;
    switch (tile) {
// Begin ladder Check
        case(9):
            transport = 34;
            break;
        case(40):
            transport = 64;
            break;
        case(67):
            transport = 86;
            break;
// Begin Snake Check
        case(54):
            transport = 19;
            break;
        case(90):
            transport = 48;
            break;
        case(99):
            transport = 77;
            break;
    }
    // END CHECK
    if (transport != 0){
        tile = transport;
    }
    if (tile > 100){
        tile = old;
    }
    return tile;
}

int main(){
    ios_base::sync_with_stdio(false);
    int input = 0;
    while (playing){
        if (tile == 100){
            cout << "You Win!";
            playing = false;
            return 0;
        }
        cin >> input;
        if (input == 0){
            cout << "You Quit!";
            playing = false;
            return 0;
        }
        cout << "You are now on square " << play(input) << "\n";
    }
}