#include <bits/stdc++.h>
using namespace std;

int N, Q;
int A[100009], X[100009];

int BinarySearch(int X){
    int L = 1, R = N;
    while (L <= R){
        int M = (L + R) / 2;
        if (A[M] == X) return M - 1;
        else if (A[M] > X) R = M - 1;
        else L = M + 1;
    }
    return L - 1;
    //cout << "over" << endl;
}

int main() {
    //input
    cin >> N;
    for (int i = 1; i < N + 1; i++) cin >> A[i];
    cin >> Q;
    for (int i = 1; i < Q + 1; i++) cin >> X[i];
    //sort
    sort(A + 1, A + N + 1);
    /*
    for (int i = 1; i < N + 1; i++) cout << i << "  ";
    cout << endl;
    for (int i = 1; i < N + 1; i++) cout << A[i] << " ";
    cout << endl;
    */
    //output
    for (int i = 1; i < Q + 1; i++){
        int ans = BinarySearch(X[i]);
        cout << ans << endl;
    }
}