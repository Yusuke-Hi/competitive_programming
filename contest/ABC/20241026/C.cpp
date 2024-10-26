#include <bits/stdc++.h>
using namespace std;

void input(int i, int j, vector<vector<int>>& data) {
    data[i][j] = 0;
    data[i + 2][j + 1] = 0;
    data[i + 1][j + 2] = 0;
    data[i - 1][j + 2] = 0;
    if (i > 2){
        data[i - 2][j + 1] = 0;
        data[i - 2][j - 1] = 0;
    }
    if (j > 2){
        data[i - 1][j - 2] = 0;
        data[i + 1][j - 2] = 0;
    }
    data[i + 2][j - 1] = 0;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(M + 1), b(M + 1);
    for (int k = 1; k < M + 1; k++) cin >> a.at(k) >> b.at(k);

    vector<vector<int>> data(N + 3, vector<int>(N + 3, 1));
    for (int k = 1; k < M + 1; k++) {
        input(a.at(k), b.at(k), data);
    }
    /*
    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < N + 1; j++) cout << data[i][j] << " ";
        cout << endl;
    }
    */
    int ans = 0;
    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < N + 1; j++) ans += data[i][j];
    }
    cout << ans << endl;
}
