#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string N_s = to_string(N);
    int S = 0;
    for (int i = 0; i < N_s.size(); i++){
        S += N_s[i] - '0';
        //cout << N_s[i] << endl;
    }
    //cout << S << endl;
    if (N % S == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}