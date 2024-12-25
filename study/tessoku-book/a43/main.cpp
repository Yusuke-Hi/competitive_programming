#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n + 1];
    char b[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> a[i] >> b[i];

    int ans = 0;
    for (int i = 1; i < n + 1; i++){
        if (b[i] == 'E') ans = max(ans, l - a[i]);
        else ans = max(ans, a[i]);
    }

    cout << ans << endl;
}