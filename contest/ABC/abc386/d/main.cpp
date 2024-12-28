#include <bits/stdc++.h>
using namespace std;

bool check_w(int x, int y, vector<int> x_w, vector<int> y_w){
    for(int k = 0; k < x_w.size(); k++){
        if((x == x_w.at(k) && y < y_w.at(k)) || (y == y_w.at(k) && x < x_w.at(k))){
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int x[m + 1], y[m + 1];
    char c[m + 1];
    for (int i = 1; i < m + 1; i++) cin >> x[i] >> y[i] >> c[i];

    //vector<vector<char>> grid(n + 1, vector<char>(n + 1, 'B'));
    vector<int> x_w, y_w;
    for (int i = 1; i < m + 1; i++){
        if (c[i] == 'W'){
            x_w.push_back(x[i]);
            y_w.push_back(y[i]);
        }
    }
    for (int i = 1; i < m + 1; i++){
        if (c[i] == 'B'){
            if (check_w(x[i], y[i], x_w, y_w)) continue;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}