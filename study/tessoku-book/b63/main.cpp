#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    vector<vector<char>> grid(r, vector<char>(c));
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++) cin >> grid.at(i).at(j);
    }
}