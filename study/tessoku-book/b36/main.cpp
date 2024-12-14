#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int on = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '1') on++;
    }

    /*
    bitset<30> bs(s);
    for (int i = 0; i < 20; i++) {
        on += bs[i]; 
    }
    */

    if (abs(on - k) % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}