#include <bits/stdc++.h>
using namespace std;

long long f(long long x){
    long long sod = 0;
    string s = to_string(x);
    for (int i = 0; i < s.size(); i++){
        sod += s[i] - '0';
    }
    return sod;
}

int main() {
    long long n;
    cin >> n;

    long long key = n / 10;
    long long ans = key * 45 + 10 * (key - 1) * key / 2;
    int sod;
    for (long long i = key * 10; i < n + 1; i++){
        if (i == key * 10) sod = f(i);
        else sod++;
        ans += sod;
    }
    cout << ans << endl;

    long long ans2 = 0;
    for (int i = 0; i < n + 1; i++) ans2 += f(i);
    cout << ans2 << endl;
}
