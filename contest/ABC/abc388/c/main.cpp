#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> a(n);
    for (long long i = 0; i < n; i++) cin >> a.at(i);

    long long ans = 0;
    for (long long i = 0; i < n; i++){
        ans += a.end() - lower_bound(a.begin(), a.end(), 2 * a.at(i));
    }
    cout << ans << endl;
}