#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    int N, D;
    int A[100009], L[100009], R[100009];
    cin >> N;
    for (int i = 1; i < N + 1; i++) cin >> A[i];
    cin >> D;
    for (int j = 1; j < D + 1; j++) cin >> L[j] >> R[j];
    //output
    for (int j = 1; j < D + 1; j++){
        int ans = 0;
        for (int k = 1; k < N + 1; k++){
            if (L[j] <= k && k <= R[j]) continue;
            if (A[k] > ans) ans = A[k];
        }
        cout << ans << endl;
    }
}