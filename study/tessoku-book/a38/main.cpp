#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    int l[10009], r[10009], h[10009];
    for (int role = 0; role < n; role++) cin >> l[role] >> r[role] >> h[role];

    int lim[400];
    for (int day = 1; day < d + 1; day++) lim[day] = 24;
    for (int role = 0; role < n; role++){
        for (int day = l[role]; day < r[role] + 1; day++){
            lim[day] = min(lim[day], h[role]);
        }
    }
    int ans = 0;
    for (int day = 1; day < d + 1; day++) ans += lim[day];
    cout << ans << endl;
}