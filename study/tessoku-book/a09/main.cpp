#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    int a[n + 1], b[n + 1] , c[n + 1] , d[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    vector<vector<int>> reg(h + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= n; i++){
        reg.at(a[i]).at(b[i])++;
        reg.at(a[i]).at(d[i] + 1)--;
        reg.at(c[i] + 1).at(b[i])--;
        reg.at(c[i] + 1).at(d[i] + 1)++;
    }
    

    // for (int i = 0; i <= h; i++){
    //     for (int j = 0; j <= w; j++){
    //         cout << reg.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> cumu(h + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            cumu.at(i).at(j) = cumu.at(i).at(j - 1) + reg.at(i).at(j);
        }
    }
    for (int j = 1; j <= w; j++){
        for (int i = 1; i <= h; i++){
            cumu.at(i).at(j) = cumu.at(i - 1).at(j) + cumu.at(i).at(j);
        }
    }

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){

            // cout << reg.at(i).at(j) << " ";
            if (j >= 2) cout << " ";
            cout << cumu.at(i).at(j);
        }
        cout << endl;
    }
}