#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<string> que;

    int op;
    string name;
    for (int i = 0; i < q; i++){
        cin >> op;
        if (op == 1){
            cin >> name;
            que.push(name);
        }
        else if (op == 2) cout << que.front() << endl;
        else que.pop();
    }
}