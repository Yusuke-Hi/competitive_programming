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
    //cumulative
    int cumu_L[100009], cumu_R[100009];
    for (int i = 0; i < 100009; i++){//reset
        cumu_L[i] = 0;
        cumu_R[i] = 0;
    }
    for (int i = 1; i < N + 1; i++) cumu_L[i] = max(cumu_L[i - 1], A[i]);
    for (int i = N; i > 0; i--) cumu_R[i] = max(cumu_R[i + 1], A[i]);
    //output
    for (int j = 1; j < D + 1; j++){
        int ans = max(cumu_L[L[j] - 1], cumu_R[R[j] + 1]);
        cout << ans << endl;
    }
}