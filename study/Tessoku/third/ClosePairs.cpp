#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N], R[N];
    for(int i = 0; i < N; i++) cin >> A[i];
    long long ans = 0;
    for (int i = 0; i < N; i++){
        if (i == 0) R[i] = 1;
        else R[i] = R[i - 1];
        while(R[i] < N && A[R[i]] - A[i] <= K){
            R[i]++;
        }
        ans += R[i] - i - 1;
    }
    cout << ans << endl;
}