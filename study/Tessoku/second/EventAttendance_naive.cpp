#include <bits/stdc++.h>
using namespace std;

int main() {
    //in
    int D, N;
    cin >> D >> N;
    int L[N], R[N];
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];
    //num
    int num[D+1];
    num[0] = 0;
    for (int j = 1; j <= D; j++) num[j] = 0;
    //input
    for (int i = 1; i <= N; i++){
        for (int k = L[i]; k <= R[i]; k++){
            num[k]++;
        }
    }
    //cumu out
    for (int j = 1; j <= D; j++) cout << num[j] << endl;
}