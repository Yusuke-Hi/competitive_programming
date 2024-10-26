#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int flgs[] = {0, 0, 0};
    for (int i = 0; i < 3; i++){
        if (S[i] == 'A') flgs[0] = 1;
        else if (S[i] == 'B') flgs[1] = 1;
        else if (S[i] == 'C') flgs[2] = 1;
    }
    if (flgs[0] == 1 && flgs[1] == 1 && flgs[2] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}