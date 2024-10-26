#include <bits/stdc++.h>
using namespace std;

void input(int i, int j, vector<vector<int>> &data){
    for (int k = 0; k < 8; k++) data.at(i).at(k) = 0;
    for (int l = 0; l < 8; l++) data.at(l).at(j) = 0;
}

int main() {
    string S[8];
    for (int i = 0; i < 8; i++) cin >> S[i];
    vector<vector<int>> data(8, vector(8, 1));

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (S[i][j] == '#') input(i, j, data);
        }
    }

    int ans = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++) ans += data.at(i).at(j);
    }
    cout << ans << endl;
}