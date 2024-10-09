#include <bits/stdc++.h>
using namespace std;

int main() {
int N, Q;
cin >> N >> Q;
int A[N], cum[N+1];
for (int i = 0; i < N; i++){
    cin >> A[i];
}
int L[Q], R[Q];
for (int j = 0; j < Q; j++){
    cin >> L[j] >> R[j];
}

for (int i = 0; i < N + 1; i++){
    if (i == 0) cum[i] = 0;
    else cum[i] = cum[i - 1] + A[i-1];
    //cout << cum[i] << " ";
}

//cout << endl;
//for (int i = 0; i < N; i++) cout << cum[i] << " ";
//cout << endl;
for (int j = 0; j < Q; j++){
    if (L[j] == 1) cout << cum[R[j]] << endl;
    else cout << cum[R[j]] - cum[L[j]-1] << endl;
}
}