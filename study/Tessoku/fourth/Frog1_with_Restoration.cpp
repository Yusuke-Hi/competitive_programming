#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int h[N];
    for (int i = 0; i < N; i++) cin >> h[i];

    vector<int> dp;
    dp.push_back(0);
    for (int i = 1; i < N; i++){
        dp[i] = min(abs(h[i] - h[i - 1]),
        )
    }
}