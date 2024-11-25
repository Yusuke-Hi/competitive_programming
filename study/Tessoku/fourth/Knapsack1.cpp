#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    int w[N + 1], v[N + 1];
    for (int i = 1; i < N + 1; i++) cin >> w[i] >> v[i];

    int dp[N + 1][W + 1];
    dp[0][0] = 0;
    for (int j = 1; j < W + 1; j++) dp[0][j] = -1;
    for (int i = 1; i < N + 1; i++){
        for(int j = 0; j < W + 1; j++){
            if()
        }
    }
}