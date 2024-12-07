#include <bits/stdc++.h>
using namespace std;

int n;

int Div_count(int i_){
    vector<int> prime_array;
    vector<bool> is_prime(i_ + 1, true); // 素数フラグ（初期値はすべて true）
    is_prime[0] = is_prime[1] = false;  // 0 と 1 は素数ではない

    for (int i = 2; i * i <= i_; i++) {
        if (is_prime[i]) { // 素数の場合のみ篩を実行
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; // i の倍数を素数ではないとする
            }
        }
    }

    for (int i = 2; i <= i_; i++) {
        if (is_prime[i]) {
            prime_array.push_back(i);
        }
    }

    vector<int> count_array;
    for (int k = 0; k < prime_array.size(); k++){
        int count = 0;
        while(i_ != 1){
            if (i_ % prime_array[k] == 0) {
                i_ /= prime_array[k];
                count++;
            }
            else break;
        }
        count_array.push_back(count);
    }

    int d_count = 1;
    for (int l = 0; l < count_array.size(); l++){
        d_count *= count_array[l] + 1;
    }
    if (d_count == 9) return 1;
    else return 0;
}

int main() {
    cin >> n;
    long long ans = 0;
    for (long long i = 1; i < n + 1; i++){
        ans += Div_count(i);
    }
    cout << ans << endl;
}