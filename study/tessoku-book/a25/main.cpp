#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char c[h + 1][w + 1];
    for (int i = 1; i < h + 1; i++){
        for (int j = 1; j < w + 1; j++) cin >> c[i][j];
    }

    long long dp[h + 1][w + 1];
    dp[1][1] = 1;
    for (int i = 1; i < h + 1; i++){
        for (int j = 1; j < w + 1; j++){
            if (i == 1 && j == 1) continue;
            if (c[i][j] == '#') dp[i][j] = 0;
            else {
                if (i == 1) dp[i][j] = dp[i][j - 1];
                else if (j == 1) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            } 
        }
    }
    /*
    for (int i = 1; i < h + 1; i++){
        for (int j = 1; j < w + 1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */
    cout << dp[h][w] << endl;
}