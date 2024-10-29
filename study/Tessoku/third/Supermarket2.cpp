#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N + 1], S[N + 1], R[N + 1];
    A[0] = 0;
    for (int i = 1; i < N + 1; i++) cin >> A[i];
    S[0] = 0;
    for (int i = 1; i < N + 1; i++) S[i] = S[i - 1] + A[i];
    long long ans = 0;
    for (int i = 1; i < N + 1; i++){
        if(i == 1) R[i] = 0;
        else R[i] = R[i - 1];
        //cout << S[R[i] + 1] << " " << S[i - 1] << endl;
        while(R[i] < N && S[R[i] + 1] - S[i - 1] <= K){
            R[i]++;
        }
        ans += R[i] - i + 1;
    }
    cout << ans << endl;
}