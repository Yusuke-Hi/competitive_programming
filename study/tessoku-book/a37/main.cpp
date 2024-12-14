#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, b;
    cin >> n >> m >> b;
    int a[200009], c[200009];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> c[j];

    long long ans = n * m * b;
    for (int i = 0; i < n; i++) ans += m * a[i];
    for (int j = 0; j < m; j++) ans += n * c[j];

    cout << ans << endl;
}