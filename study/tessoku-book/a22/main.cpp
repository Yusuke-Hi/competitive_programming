#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N + 1], B[N + 1];
    for (int i = 1; i < N; i++) cin >> A[i];
    for (int i = 1; i < N; i++) cin >> B[i];

    int dp[N + 1];
    for (int i = 1; i < N + 1; i++) dp[i] = 0;
    for (int i = 1; i < N; i++){
        dp[A[i]] = max(dp[i] + 100, dp[A[i]]);
        dp[B[i]] = max(dp[i] + 150, dp[B[i]]);
    }
    cout << dp[N] << endl;
}