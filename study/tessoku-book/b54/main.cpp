#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    map<int, int> m;
    for (int i = 1; i <= n; i++) m[a[i]]++;
    
    int ans = 0;
    for (const auto& [key, value] : m){
        if (value == 1) continue;
        else {
            ans += (value * (value - 1)) / 2;
        }
    }
    cout << ans << endl;
}