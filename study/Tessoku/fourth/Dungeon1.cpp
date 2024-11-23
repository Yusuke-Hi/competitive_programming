#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N - 1], B[N - 2];
    for (int i = 0; i < N - 1; i++) cin >> A[i];
    for (int i = 0; i < N - 2; i++) cin >> B[i];

    vector<int> dp;
    dp.push_back(0); //dp[0] <- 0
    dp.push_back(A[0]); //dp[1] <- A[0]
    for (int i = 1; i < N - 1; i++) dp.push_back(min(dp[i] + A[i], dp[i - 1] + B[i - 1]));
    cout << dp.back() << endl;;
}