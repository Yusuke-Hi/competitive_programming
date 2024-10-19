#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, C;
    int T[109];
    cin >> N >> C;
    for (int i = 0; i < N; i++) cin >> T[i];
    
    int ans = 0;
    int x;
    for (int i = 0; i < N; i++){
        if (i == 0){
            ans++;
            x = i;
        }
        if (T[i] - T[x] >= C) {
            ans++;
            x = i;
        }
    }
    cout << ans << endl;
}