#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> x(h + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++) cin >> x.at(i).at(j);
    }
    int q;
    cin >> q;
    int a[q], b[q], c[q], d[q];
    for (int k = 0; k < q; k++) cin >> a[k] >> b[k] >> c[k] >> d[k];

    vector<vector<int>> cumu(h + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cumu.at(i).at(j) = cumu.at(i).at(j - 1) + x.at(i).at(j);
        }
    }
    for (int j = 1; j <= w; j++){
        for (int i = 1; i <= h; i++){
            cumu.at(i).at(j) += cumu.at(i - 1).at(j);
        }
    }

    // for (int i = 0; i <= h; i++){
    //     for (int j = 0; j <= w; j++){
    //         cout << cumu.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    for (int k = 0; k < q; k++){
        int ans = cumu.at(c[k]).at(d[k]) - cumu.at(a[k] - 1).at(d[k])
                    - cumu.at(c[k]).at(b[k] - 1) + cumu.at(a[k] - 1).at(b[k] - 1);
        // cout << "a: " << a[k] << ", b[k]: " << b[k] 
        //     << ", c[k]: " << c[k] << ", d[k]: " << d[k] << endl;
        // cout << cumu.at(c[k]).at(d[k]) << " - " << cumu.at(a[k] - 1).at(d[k]) 
        //     << " - " << cumu.at(c[k]).at(b[k] - 1) << " + " << cumu.at(a[k] - 1).at(b[k] - 1)
        //     << " = ";
        cout << ans << endl;
    }

    // cout << cumu[5][5] << endl;
}