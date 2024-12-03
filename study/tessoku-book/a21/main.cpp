#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int P[N + 1], A[N + 1];
    for (int i = 1; i < N + 1; i++) cin >> P[i] >> A[i];

    int dp[N + 1][N + 1];
    dp[1][N] = 0;
    for (int LEN = N - 2; LEN >= 0; LEN--){
        for (int l = 1; l <= N - LEN; l++){
            int r = l + LEN;
            //cout << "l: " << l << ", r: " << r << ", LEN: " << LEN << endl;
            int score1 = 0;
            if (l <= P[l - 1] && P[l - 1] <= r) score1 = A[l - 1];
            int score2 = 0;
            if (l <= P[r + 1] && P[r + 1] <= r) score2 = A[r + 1];

            if (l == 1) dp[l][r] = dp[l][r + 1] + score2;
            else if (r == N) dp[l][r] = dp[l - 1][r] + score1;
            else dp[l][r] = max(dp[l][r + 1] + score2, dp[l - 1][r] + score1);
        }
    }
    int ans = 0;
    for (int i = 1; i < N + 1; i++) ans = max(ans, dp[i][i]);
    cout << ans << endl;
}