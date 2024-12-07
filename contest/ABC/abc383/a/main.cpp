#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n + 1], v[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> t[i] >> v[i];

    int ans = 0;
    t[0] = 0;
    for (int i = 1; i < n + 1; i++){
        ans -= t[i] - t[i - 1];
        if (ans < 0) ans = 0;
        ans += v[i];
    }
    cout << ans << endl;
}