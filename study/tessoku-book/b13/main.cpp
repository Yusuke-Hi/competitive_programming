
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    long long cumu[n + 1];
    cumu[0] = 0;
    for (int i = 1; i <= n; i++) cumu[i] = a[i] + cumu[i - 1];

    int r[n + 1];
    r[1] = 0;
    for (int i = 1; i <= n; i++){
        if(i > 1) r[i] = r[i - 1];
        for (int j = r[i] + 1; j <= n; j++){
            if (cumu[j] - cumu[i - 1] <= k) r[i]++;
            else break;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++){
        // cout << r[i] << " ";
        ans += r[i] - i + 1;
    }
    // cout << endl;
    cout << ans << endl;
}