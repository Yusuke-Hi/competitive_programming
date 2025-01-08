#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    map<string, int> m;
    int op, score;
    string name;
    for (int i = 0; i < q; i++){
        cin >> op;
        if (op == 1){
            cin >> name >> score;
            m.insert(make_pair(name, score));
        }
        else if (op == 2){
            cin >> name;
            cout << m.at(name) << endl;
        }
    }
}