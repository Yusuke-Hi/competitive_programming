#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, W;
    cin >> N >> W;
    long long w[N + 1], v[N + 1];
    for (long long i = 1; i < N + 1; i++) cin >> w[i] >> v[i];

    long long dp[N + 1][W + 1];
    dp[0][0] = 0;
    for (long long j = 1; j < W + 1; j++) dp[0][j] = -1;
    for (long long i = 1; i < N + 1; i++){
        for(long long j = 0; j < W + 1; j++){
            if(j - w[i] < 0){
                if(dp[i - 1][j] > -1) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = -1;
            }
            else {
                if(dp[i - 1][j - w[i]] > -1){
                    if(dp[i - 1][j] > -1) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
                    else dp[i][j] = dp[i - 1][j - w[i]] + v[i];
                }
                else if (dp[i - 1][j] > -1) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = -1;
            }
        }
    }
/*
    for (int i = 0; i < N + 1; i++){
        for (int j = 0; j < W + 1; j++) cout << dp[i][j] << " ";
        cout << endl;
    }
*/
    long long ans = 0;
    for (long long j = 1; j < W + 1; j++) ans = max(ans, dp[N][j]);
    cout << ans << endl;
}