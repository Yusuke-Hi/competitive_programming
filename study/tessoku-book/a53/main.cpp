#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, op, x;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < q; i++){
        cin >> op;
        if (op == 1){
            cin >> x;
            pq.push(x);
        }
        else if (op == 2) cout << pq.top() << endl;
        else pq.pop();
    }
}