#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    int x[q];
    for (int i = 0; i < q; i++) cin >> x[i];

    sort(a, a + n);
    // for (int i = 0; i < n; i++) cout << a[i] << " ";
    // cout << endl;
    for (int i = 0; i < q; i++){
        cout << lower_bound(a, a + n, x[i]) - a << endl;
    }
}