#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X[100009], Y[100009];
    int Q, A[1509], B[1509], C[1509], D[1509];
    vector<vector<int>> plot(1510, vector<int>(1510, 0));
    vector<vector<int>> cumu(1510, vector<int>(1510, 0));

    cin >> N;
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];
    cin >> Q;
    for (int j = 0; j < Q; j++) cin >> A[j] >> B[j] >> C[j] >> D[j];

    for (int i = 0; i < N; i++) plot[X[i]][Y[i]]++;
    
    for (int i = 1; i < 1509; i++){
        for (int j = 1; j < 1509; j++) cumu[i][j] = cumu[i][j-1] + plot[i][j];
    }
    for (int i = 1; i < 1509; i++){
        for (int j = 1; j < 1509; j++) cumu[i][j] = cumu[i-1][j] + cumu[i][j];
    }

    for (int k = 0; k < Q; k++){
        cout << cumu[C[k]][D[k]] + cumu[A[k] - 1][B[k] - 1]
            - (cumu[A[k]][B[k] - 1] + cumu[A[k] - 1][B[k]]) << endl;
    }

}
