#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    int T, N;
    cin >> T >> N;
    int L, R;
    //data
    int data[T];
    for (int j = 0; j < T; j++) data[j] = 0;
    
    for (int i = 0; i < N; i++){
        cin >> L >> R;
        data[L]++;
        data[R]--;
    }
    //cumulative
    int result;
    for (int j = 0; j < T; j++){
        if (j == 0) result = data[j];
        else result = result + data[j];
        cout << result << endl;
    }
}