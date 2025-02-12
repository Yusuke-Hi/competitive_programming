
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], b[n], c[n], d[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    vector<int> x, y;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        x.push_back(a[i] + b[j]);
        y.push_back(c[i] + d[j]);
      }
    }

    // for (int i = 0; i < n * n; i++) cout << x.at(i) << " ";
    // cout << endl;
    // for (int i = 0; i < n * n; i++) cout << y.at(i) << " ";
    // cout << endl;

    sort(y.begin(), y.end());

    for (int i = 0; i < n * n; i++){
      auto it = lower_bound(y.begin(), y.end(), k - x.at(i));
      if (*it == k - x.at(i)){
        cout << "Yes" << endl;
        return 0;
      }
    }
    cout << "No" << endl;
}