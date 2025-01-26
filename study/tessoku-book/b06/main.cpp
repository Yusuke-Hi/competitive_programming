#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int q;
    cin >> q;
    int l[q + 1], r[q + 1];
    for (int j = 1; j <= q; j++) cin >> l[j] >> r[j];

    int cumu[n + 1];
    cumu[0] = 0;
    for (int i = 1; i <= n; i++) cumu[i] = cumu[i - 1] + a[i];

    int 
    for (int j = 1; j <= q; j++){
        f
    }
}