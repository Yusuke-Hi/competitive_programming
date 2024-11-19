#include <bits/stdc++.h>
using namespace std;

void make_array(int a, int b, int array[], const int A[]){
    for (int i = 0; i < (1 << b); i++){
        bitset<15> bs(i);
        int sum = 0;
        for (int j = 0; j < b; j++){
            if (bs[j]) sum += A[a + j];
        }
        array[i] = sum;
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    
    int p = N / 2, q = N - p;
    int P[(1 << p)], Q[(1 << q)];
    //cout << p << " " << q << endl;

    make_array(0, p, P, A);
    make_array(p, q, Q, A);
    sort(Q, Q + (1 << q));

    /*
    for (int i = 0; i < (1 << p); i++) cout << P[i] << " ";
    cout << endl;
    for (int i = 0; i < (1 << q); i++) cout << Q[i] << " ";
    cout << endl;
    */

    
    for (int i = 0; i < (1 << p); i++){
        int L = 0, R = (1 << q) - 1;
        if (Q[L] == K - P[i] || Q[R] == K - P[i]){
            cout << "Yes" << endl;
            return 0;
        }
        if ((K - P[i] < Q[L]) || (Q[R] < K - P[i])) continue;

        while (L < R){
            int M = (L + R) / 2;
            if (Q[M] == K - P[i]){
                cout << "Yes" << endl;
                return 0;
            }
            else if (Q[M] < K - P[i]) L = M + 1;
            else R = M; 
        }
    }
    cout << "No" << endl;
}