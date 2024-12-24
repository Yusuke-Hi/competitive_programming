#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int x = X, y = Y;
    vector<pair<int, int>> vp;
    while(!(x == 1 && y == 1)){
        vp.push_back(make_pair(x, y));
        if (x > y) x = x - y;
        else y = y - x;
    }

    cout << vp.size() << endl;
    for (int i = vp.size() - 1; i >= 0; i--) cout << vp.at(i).first << " " << vp.at(i).second << endl; 
}