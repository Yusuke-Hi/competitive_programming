#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    int ans = 0;
    int count = 0;
    for (int i = 0; i < N; i++){
        if (S[i] == 'O') count++;
        else count = 0;
        if (count == K){
            ans++;
            count = 0;
        }
    }
    cout << ans << endl;
}