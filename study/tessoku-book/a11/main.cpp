#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    auto it = lower_bound(a.begin(), a.end(), x);
    // cout << it << endl;
    cout << it - a.begin() << endl;
}