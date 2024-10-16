#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    int A[N + 1];
    A[0] = 0;
    cin >> N >> X;
    for (int i = 1; i < N + 1; i++){
        cin >> A[i];
    }
    //binary search
    int tmp = N / 2;
    while (true){
        if (A[tmp] == X){
            cout << tmp << endl;
            return 0;
        }
        if (X > A[tmp]){
            tmp = (tmp + N) / 2;
        }
    }
}