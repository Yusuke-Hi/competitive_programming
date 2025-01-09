#include <bits/stdc++.h>
using namespace std;

int main() {
    long long q;
    cin >> q;

    long long op, x;
    set<long long> S;
    for (long long i = 0; i < q; i++){
        cin >> op >> x;
        if (op == 1) S.insert(x);
        else{
            if (S.size() == 0) cout << -1 << endl;
            else{
                auto it = S.lower_bound(x);
                long long a, b;
                if (it == S.end()){
                    it--;
                    cout << abs(x - *it) << endl;
                }
                else if (it == S.begin()){
                    cout << abs(x - *it) << endl;
                }
                else{
                    a = abs(x - *it);
                    it--;
                    b = abs(x - *it);
                    cout << min(a, b) << endl;
                }
            }
        }
    }
}