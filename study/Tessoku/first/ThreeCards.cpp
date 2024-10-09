#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int result = 0;
    for (int i = 1; i < N + 1; i++){
        for (int j = 1; j < N + 1; j++) {
            int k = K - (i + j);
            if (k > 0  && k < N + 1){
                result++;
            }
        }
    }
    cout << result << endl;
}