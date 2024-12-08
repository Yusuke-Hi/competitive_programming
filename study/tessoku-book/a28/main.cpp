#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    char t;
    int ans = 0;
    for (int i = 0; i < n; i++){
        cin >> t >> a;
        if (t == '+') ans += a;
        else if (t == '-'){
            ans -= a;
            if (ans < 0) ans += 10000;
        }
        else ans *= a;
        ans %= 10000;
        cout << ans << endl; 
    }
}