#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int c = 0;
    for (int i = 0; i < N; i++){
        char s;
        cin >> s;
        if (s == '@') c++;
    }
    cout << N - (c - D) << endl;
}