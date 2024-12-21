#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || b + c == a || c + a == b || (a == b && b == c)){
        cout << "Yes" << endl;
        return 0;
    }
    //cout << (a == b && b == c) << endl;
    cout << "No" << endl;
}