#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, b;
    cin >> n >> m >> b;
    long long a = 0, a_, c = 0, c_;
    for (int i = 0; i < n; i++){
        cin >> a_;
        a += a_;
    }
    for (int j = 0; j < m; j++){
        cin >> c_;
        c += c_;
    }

    long long ans = a * m + n * m * b + c * n;
    cout << ans << endl;
}