#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    int cnt = 0;
    for (int i = 0; i < pow(2, N); i++){
        cnt++;
        bitset<10> s(i);
        //cout << s << endl;
        
    }
    cout << cnt;
}