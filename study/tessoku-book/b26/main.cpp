#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> is_prime(n + 1, true); // 素数フラグ（初期値はすべて true）
    is_prime[0] = is_prime[1] = false;  // 0 と 1 は素数ではない

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) { // 素数の場合のみ篩を実行
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; // i の倍数を素数ではないとする
            }
        }
    }

    // 結果を出力
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            cout << i << endl;
        }
    }

    return 0;
}
