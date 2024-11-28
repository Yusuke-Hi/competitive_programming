#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int s_l = S.size() + 1, t_l = T.size() + 1;
    int dp[s_l][t_l];
    for (int i = 0; i < s_l; i++) dp[i][0] = 0;
    for (int j = 0; j < t_l; j++) dp[0][j] = 0;

    for (int i = 1; i < s_l; i++){
        for (int j = 1; j < t_l; j++){
            if (S[i - 1] != T[j - 1]) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            else {
                dp[i][j] = max(dp[i - 1][j - 1] + 1
                                , max(dp[i - 1][j], dp[i][j - 1]));
                /*
                cout << "(" << i << "," << j << ") .. "
                    << "S[i]: " << S[i - 1] << ", T[j]: " << T[j - 1] << endl;
                */
            }
        }
    }
/*
    for (int i = 0; i < s_l; i++){
        for (int j = 0; j < t_l; j++) cout << dp[i][j] << " ";
        cout << endl;
    }
*/
    cout << dp[s_l - 1][t_l - 1] << endl;
}