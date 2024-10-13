#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, X, Y;
    vector<vector<int>> plot(1510, vector<int>(1510, 0));
    vector<vector<int>> cumu(1510, vector<int>(1510, 0));

    cin >> N;
    for (int k = 0; k < N; k++) {
        cin >> X >> Y;
        plot[X][Y] = 1;
    }

    // Y方向の累積和
    for (int i = 1; i < 1510; i++) {
        for (int j = 1; j < 1510; j++) cumu[i][j] = cumu[i][j - 1] + plot[i][j];
    }

    // X方向の累積和
    for (int j = 1; j < 1510; j++) {
        for (int i = 1; i < 1510; i++) cumu[i][j] = cumu[i - 1][j] + cumu[i][j];
    }

    // 表示
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) cout << plot[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) cout << cumu[i][j] << " ";
        cout << endl;
    }

    cin >> Q;
    int a, b, c, d;
    for (int l = 0; l < Q; l++){
        cin >> a >> b >> c >> d;
        cout << cumu[c][d] - cumu[a][b] << endl;
    }
}
