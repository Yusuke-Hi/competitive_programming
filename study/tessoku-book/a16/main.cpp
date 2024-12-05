#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 2; i < n + 1; i++) cin >> a[i];
    for (int i = 3; i < n + 1; i++) cin >> b[i];

    int dp[n + 1];
    dp[1] = 0;
    dp[2] = a[2];
    for (int i = 2; i < n + 1; i++){
        dp[i + 1] = min(dp[i] + a[i + 1], )
        dp[i + 2] = min(dp[i] + b[i + 2])
    }
    cout << dp[n] << endl;
}