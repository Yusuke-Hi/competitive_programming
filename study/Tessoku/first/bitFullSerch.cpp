#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;//, K, result = 0;
    cin >> N;
    int data[N];
    for (int i = 0; i < N; i++) cin >> data[i];
    for (int k = 0; k < 8; k++){
        bitset<3> bs(k);
        //cout << bs << endl;
        //cout << bs[0] << ", " << bs[1] << ", " << bs[2] << endl;
        int tmp = 0;
        for (int j = 0; j < 3; j++){
            //cout << bs[j] << ", " << data[j] << endl;
            tmp += bs[j] * data[j];
        }
        cout << bs << ", " << tmp << endl;
    }
}