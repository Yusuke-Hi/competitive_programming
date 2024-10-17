#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[100009];

bool check(int M){
    long long sum = 0;
    for (int i = 1; i < N + 1; i++) sum += M / A[i];
    return sum >= K;
}

int BinarySearch(){
    long long L = 1, R = 1000000000;
    while (L < R){
        long long M = (L + R) / 2;
        bool C = check(M);
        if (C == true) R = M;
        else L = M + 1;
    }
    return L;
}

int main() {
    //input
    cin >> N >> K;
    for (int i = 1; i < N+1; i++) cin >> A[i];
    //output
    int ans = BinarySearch();
    cout << ans << endl;
}