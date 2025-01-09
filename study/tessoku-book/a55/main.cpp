#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    int op, x;
    set<int> S;
    for (int i = 0; i < q; i++){
        cin >> op >> x;
        if (op == 1){
            S.insert(x);
        }
        else if (op == 2){
            S.erase(x);
        }
        else{
            auto it = S.lower_bound(x);
            if (it == S.end()){
                cout << -1 << endl;
            }
            else{
                cout << *it << endl;
            }
        }
    }
}