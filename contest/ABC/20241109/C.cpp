#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M + 1, 0), A(N + 1, 0);
    for (int i = 1; i < M + 1; i++) cin >> X[i];
    for (int i = 1; i < M + 1; i++) cin >> A[X[i]];

    
    int sum_stone = 0;
    for (int j = 1; j < N + 1; j++) sum_stone += A[j];
    if (sum_stone != N){
        cout << -1 << endl;
        return 0;
    }
    
    int ans = 0;
    //for (int j = 1; j < N + 1; j++) cout << A[j] << " ";
    for (int j = 1; j < N; j++){
        if(A[j] == 0){
            cout << -1 << endl;
            break;
        }else{
            int extra = A[j] - 1;
            A[j + 1] += extra;
            ans += extra;
        }
        if (j == N - 1){
            cout << ans << endl;
            break;
        }
    }
}