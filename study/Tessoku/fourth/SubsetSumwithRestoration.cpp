#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    int A[N + 1];
    for (int i = 1; i < N + 1; i++) cin >> A[i];

    bool dp[N + 1][S + 1];
    dp[0][0] = true;
    for (int j = 1; j < S + 1; j++) dp[0][j] = false;
    for (int i = 1; i < N + 1; i++){
        for (int j = 0; j < S + 1; j++){
            if (j < A[i]){
                if (dp[i - 1][j] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
            else {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }

    /*
    if (dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    */

    if (dp[N][S] == false){
        cout << -1 << endl;
        return 0;
    }

    vector<int> ans;
    pair<int, int> pos = make_pair(N, S);
    while(pos.second > 0){
        if (dp[pos.first - 1][pos.second] == true) pos.first--;
        else{
            ans.push_back(pos.first);
            pos.second -= A[pos.first];
            pos.first--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++){
        if (i == 0) cout << ans[i];
        else cout << " " << ans[i];
    }
    cout << endl;
}