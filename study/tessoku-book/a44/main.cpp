#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) a.at(i) = i + 1;

    int op, x, y, state = 0;
    for (int j = 1; j < q + 1; j++){
        cin >> op;
        if (op == 1){
            cin >> x >> y;
            if (state % 2 == 0) a.at(x - 1) = y;
            else a.at(n - x) = y;
        }
        else if(op == 2) state++;
        else{
            cin >> x;
            if (state % 2 == 0) cout << a.at(x - 1) << endl;
            else cout << a.at(n - x) << endl;
        }
    }
}