#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    
    int B[N * N];
    for (int i = 0; i < (1 << N); i++){
        cout << i << " ";
        cout << endl;
        bitset<15> bs(i);
        int sum = 0;
        for (int j = 0; j < N; j++){
            if (bs[j]) sum += A[j];
        }
        B[i] = sum;
    }
    sort(B, B + (1 << N));

    for (int i = 0; i < (1 << N); i++) cout << B[i] << " ";
    cout << endl;
}