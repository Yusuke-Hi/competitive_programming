#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), ans(n + 1, m);
    for (int i = 0; i < m; i++) cin >> a.at(i);

    for (int i = 0; i < m; i++){
        ans.at(a.at(i))--;
    }

    for (int j = 1; j < n + 1; j++) cout << ans.at(j) << endl;
}