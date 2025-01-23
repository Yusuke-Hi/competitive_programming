#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n.size(); i++){
        ans += (n.at(i) - '0') * (1 << (n.size() - 1 - i));
    }
    cout << ans << endl;
}