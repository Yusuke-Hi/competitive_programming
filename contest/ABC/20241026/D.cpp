#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int L[N], R[N];
    for (int i = 0; i < N; i++) cin >> L[i] >> R[i];

    int ans = 0;
    for (int j = 1; j < M + 1; j++){
        for (int k = j; k < M + 1; k++){
            int tmp = 0;
            for (int i = 0; i < N; i++){
                if (j <= L[i] && R[i] <= k){
                    tmp++;
                    break;
                }
            }
            if (tmp == 0) ans++;
        }
    }
    cout << ans << endl;
}