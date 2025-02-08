#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n + 1], q[n + 1];
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) cin >> q[i];
    
    map<int, int> m;
    for (int i = 1; i <= n; i++){
        m.emplace(q[i], q[p[i]]);
    }

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->second;
        if (std::next(it) != m.end()) {
            cout << " ";
        }
    }
    cout << endl;
}