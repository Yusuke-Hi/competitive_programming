#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<32> s(n);
    for (int i = 31; i >= 0; i--){
        if (i != 31 && (i + 1) % 4 == 0) cout << " ";
        cout << s[i];
    }
}