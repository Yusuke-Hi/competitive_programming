#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1 || k - 2 * (n - 1) < 0) cout << "No" << endl;
    else cout << "Yes" << endl;
}