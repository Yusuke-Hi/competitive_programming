#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
    int l[n + 9], r[n + 9];
    for (int i = 1; i <= n; i++) cin >> l[i] >> r[i];

    int fluc[t], cumu[t];
    for (int j = 0; j < t; j++) fluc[j] = 0;

    for (int i = 1; i <= n; i++){
        fluc[l[i]]++;
        fluc[r[i]]--;
    }
    cumu[0] = fluc[0];
    for (int j = 1; j < t; j++) cumu[j] = cumu[j - 1] + fluc[j];

    for (int j = 0; j < t; j++) cout << cumu[j] << endl;
}