#include <bits/stdc++.h>
using namespace std;

int main() {
    //in
    int D, N;
    cin >> D >> N;
    int data[D+1], cumu[D+1];
    data[0] = 0, cumu[0] = 0;
    for (int j = 1; j <= D; j++) data[j] = 0;
    int L, R;
    for (int i = 1; i <= N; i++){
        cin >> L >> R;
        data[L]++;
        data[R + 1]--;
    }
    //cumu
    //for (int j = 0; j <= D; j++) cout << data[j] << " ";
    //cout << endl;
    for (int j = 1; j <= D; j++){
        cumu[j] = cumu[j - 1] + data[j];
        cout << cumu[j] << endl;
    }
}