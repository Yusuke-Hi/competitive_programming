#include <bits/stdc++.h>
using namespace std;

bool Judge(int i, int k, bool *st, int *a){
    for (int j = 0; j < k; j++){
        if (i >= a[j] && st[i - a[j]] == false) return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int m = INT_MAX;
    int a[100009], a_;
    for (int i = 0; i < k; i++){
        cin >> a_;
        a[i] = a_;
        m = min(m, a_);
    }
    bool st[n + 1];
    for (int i = 0; i < n + 1; i++){
        if (i < m) st[i] = false;
        else st[i] = Judge(i, k, st, a);
    }

    if (st[n]) cout << "First" << endl;
    else cout << "Second" << endl;
}