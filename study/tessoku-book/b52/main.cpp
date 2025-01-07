#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, pos;
    cin >> n >> x;
    string a;
    cin >> a;

    queue<int> qu;
    x--;
    qu.push(x);
    a.at(x) = '@';
    while (!qu.empty()){
        pos = qu.front();
        qu.pop();
        if (pos - 1 >= 0 && a.at(pos - 1) == '.'){
            a.at(pos - 1) = '@';
            qu.push(pos - 1);
        }
        if (pos + 1 < a.size() && a.at(pos + 1) == '.'){
            a.at(pos + 1) = '@';
            qu.push(pos + 1);
        }
    }
    cout << a << endl;
}