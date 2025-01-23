#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    //ans1
    // for (int i = 9; i >= 0; i--){
    //     //cout << (1 << i) << endl;
    //     if ((1<<i) <= n){
    //         n -= (1<<i);
    //         cout << 1;
    //     }
    //     else cout << 0;
    // }
    // cout << endl;

    //ans2
    // int ans[10];
    // for (int i = 0; i < 10; i++){
    //     ans[i] = n % 2;
    //     n /= 2;
    // }
    // for (int i = 9; i >= 0; i--) cout << ans[i];
    // cout << endl;

    //ans3
    for (int i = 9; i >= 0; i--){
        cout << (n / (1 << i)) % 2;
    }
    cout << endl;
}