#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    
    for (int i = 0; i < N ; i++){
        bitset<3> bs(i);
        cout << bs << endl;
    }
}