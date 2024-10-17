#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int A[N + 1];
    A[0] = 0;
    for (int i = 1; i < N + 1; i++){
        cin >> A[i];
    }
    //binary search
    int L = 1, R = N;
    while (true){
        int M = (L + R) / 2;
        if (A[M] == X){
            cout << M << endl;
            break;
        }
        if (X < A[M]) R = M - 1;
        else L = M + 1;
    }
}