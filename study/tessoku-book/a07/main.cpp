#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    int l[n + 1], r[n + 1];
    for (int i = 1; i <= n; i++) cin >> l[i] >> r[i];

    int linear[d + 9], cumu[d + 9];
    for (int j = 1; j <= d; j++) linear[j] = 0;
    for (int i = 1; i <= n; i++){
        linear[l[i]]++;
        linear[r[i] + 1]--;
    }
    cumu[0] = 0;
    for (int j = 1; j <= d; j++) cumu[j] = cumu[j - 1] + linear[j];

    for (int j = 1; j <= d; j++){
        cout << cumu[j] << endl;
    }
}