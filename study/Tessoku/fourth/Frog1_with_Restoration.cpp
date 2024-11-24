#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int h[N + 1];
    for (int i = 1; i < N + 1; i++) cin >> h[i];

    int dp[N + 1];
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);
    for (int i = 3; i < N + 1; i++){
        dp[i] = min((dp[i - 2] + abs(h[i] - h[i - 2])),
                    dp[i - 1] + abs(h[i] - h[i - 1]));
    }

    /*
    for (int i = 1; i < N + 1; i++) cout << dp[i] << " ";
    cout << endl;
    cout << dp[N] << endl;
    */

    int pos = N;
    vector<int> ans;
    while(pos > 0){
        ans.push_back(pos);
        if(dp[pos] == dp[pos - 1] + abs(h[pos] - h[pos - 1])) pos--;
        else pos -= 2;
    }
    sort(ans.begin(), ans.end());
    int K = ans.size();
    cout << K << endl;
    for (int i = 0; i < K; i++){
        cout << ans[i] << " ";
        /*
        if (i == 0) cout << ans[i];
        else cout << " " << ans[i];
        */
    }
    cout << endl;
}