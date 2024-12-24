#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int A[n + 1], B[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> A[i] >> B[i];

    int ans = 0;
    for (int a = 1; a < 101; a++){
        for (int b = 1; b < 101; b++){
            int t_ans = 0;
            for (int i = 1; i < n + 1; i++){
                if ((a <= A[i] && A[i] <= a + k) && (b <= B[i] && B[i] <= b + k)) t_ans++;
            }
            ans = max(ans, t_ans);
        }
    }
    cout << ans << endl;
}