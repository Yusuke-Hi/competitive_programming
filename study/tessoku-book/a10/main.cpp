#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int d;
    cin >> d;
    int l[d + 1], r[d + 1];
    for (int i = 1; i <= d; i++) cin >> l[i] >> r[i];

    int cumu_l[n + 1], cumu_r[n + 1];
    for (int i = 0; i <= n; i++){
        cumu_l[i] = 0;
        cumu_r[i] = 0;
    }
    for (int i = 1; i <= n; i++) cumu_l[i] = max(cumu_l[i - 1], a[i]);
    for (int i = n; i >= 1; i--){
        if (i == n){
            cumu_r[i] = a[i];
            continue;
        }
        cumu_r[i] = max(cumu_r[i + 1], a[i]);
    }

    for (int i = 1; i <= d; i++){
        cout << max(cumu_l[l[i] - 1], cumu_r[r[i] + 1]) << endl;
    }
}