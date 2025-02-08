#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++) cin >> a[i];

    sort(a, a + m);
    vector<int> ans;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < m; j++){
            if (i == a[j]) break;
            if (j == m - 1) ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++){
        if (i == ans.size() - 1) cout << ans.at(i);
        else cout << ans.at(i) << " ";
    }cout << endl;
}