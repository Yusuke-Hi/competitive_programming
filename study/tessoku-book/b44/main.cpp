#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1][n + 1];
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++) cin >> a[i][j];
    }

    int q;
    cin >> q;
    int op, x, y;
    int order[n + 1];
    for (int i = 1; i < n + 1; i++) order[i] = i;
    for (int k = 1; k < q + 1; k++){
        cin >> op >> x >> y;
        if (op == 1) swap(order[x], order[y]);
        else cout << a[order[x]][y] << endl;
    }
}