#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N + 1], B[N + 1];
    for (int i = 2; i < N + 1; i++) cin >> A[i];
    for (int i = 3; i < N + 1; i++) cin >> B[i];
    vector<string> record;

    int dp[N + 1];
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i < N + 1; i++){
        int direct = dp[i - 1] + A[i];
        int by_pass = dp[i - 2] + B[i];
        if (direct <= by_pass){
            dp[i] = direct;
            record.push_back("direct");
        } else{
            dp[i] = by_pass;
            record.push_back("by_pass");
        }
    }
    /*
    for (int j = record.size() - 1; j != -1; j--) cout << record[j] << " ";
    cout << endl << endl;


    for (int i = 1; i < N + 1; i++) cout << dp[i] << " ";
    cout << endl;
    cout << dp[N] << endl;
    */

    int pos = N;
    vector<int > ans;
    ans.push_back(N);
    for (int j = record.size() - 1; j > -1; j--){
        if (record[j] == "direct"){
            pos--;
            ans.push_back(pos);
        } else {
            j--;
            pos -= 2;
            ans.push_back(pos);
        }
    }
    if (ans[ans.size() - 1] != 1) ans.push_back(1);
    sort(ans.begin(), ans.end());
    int K = ans.size();

    cout << K << endl;
    for (int l = 0; l < ans.size(); l++) cout << ans[l] << " ";
    cout << endl;
}