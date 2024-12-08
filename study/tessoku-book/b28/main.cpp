#include <bits/stdc++.h>
using namespace std;
long long n;
long long seq[10000009];

int main() {
    cin >> n;
    seq[1] =seq[2] = 1;
    for (int i = 3; i < n + 1; i++){
        seq[i] = (seq[i - 1] + seq[i - 2]) % (1000000007);
    }
    cout << seq[n] << endl;
}