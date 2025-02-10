#include <bits/stdc++.h>
using namespace std;

long long check(int n, int s, int *a){
    long long total = 0;
    for (int i = 1; i <= n; i++){
        total += s / a[i];
    }
    return total;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int m;
    int l = 1, r = 1000000000;
    while(true){
        m = (l + r) / 2;
        if (check(n, m, a) < k){
            l = m;
        }
        else{
            r = m;
        }

        if (l + 1 == r){
            cout << r << endl;
            return 0;
        }
    }
}