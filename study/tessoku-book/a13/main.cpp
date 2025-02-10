
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int r[n + 1];
    r[1] = 1;
    for (int i = 1; i <= n; i++){
        if (i > 1) r[i] = r[i - 1];
        for (int j = r[i] + 1; j <= n; j++){
            if (a[j] - a[i] <= k && r[i] <= n){
                r[i]++;
            }
            else break;
        }
    }
    // for (int i = 1; i <= n; i++) cout << r[i] << endl;
    long long ans = 0;
    for (int i = 1; i <= n; i++){
        ans += r[i] - i;
    }
    cout << ans << endl;
}