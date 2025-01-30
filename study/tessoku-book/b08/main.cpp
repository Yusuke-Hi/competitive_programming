#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n + 1], y[n + 1];
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];

    int q;
    cin >> q;
    int a[q + 1], b[q + 1], c[q + 1], d[q + 1];
    for (int j = 1; j <= q; j++) cin >> a[j] >> b[j] >> c[j] >> d[j];

    vector<vector<int>> cumu(1509, vector<int>(1509, 0));
    for (int i = 1; i <= n; i++) cumu.at(x[i]).at(y[i])++;
    for (int x_ = 1; x_ <= 1500; x_++){
        for (int y_ = 1; y_ <= 1500; y_++){
            cumu.at(x_).at(y_) += cumu.at(x_).at(y_ - 1);
        }
    }
    for (int y_ = 1; y_ <= 1500; y_++){
        for (int x_ = 1; x_ <= 1500; x_++){
            cumu.at(x_).at(y_) += cumu.at(x_ - 1).at(y_);
        }
    }

    // for (int x_ = 1; x_ <= 6; x_++){
    //     for (int y_ = 1; y_ <= 6; y_++) cout << cumu.at(x_).at(y_) << " ";
    //     cout << endl;
    // }

    for (int j = 1; j <= q; j++){
        int ans = cumu.at(c[j]).at(d[j]) - cumu.at(a[j] - 1).at(d[j])
                    - cumu.at(c[j]).at(b[j] - 1) + cumu.at(a[j] - 1).at(b[j] - 1);
        cout << ans << endl;
    }
}