#include <bits/stdc++.h>

using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
     int n,x = 0;
     char c[4];
     cin >> n;
     for (int i = 0; i < n; i++) {
         cin >> c;
         if (c[1] == '+' || c[3] == '+'){
             x++;
         } else x--;
     }
     cout << x;
}