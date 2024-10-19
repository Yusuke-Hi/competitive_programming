#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], B[N - 1];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N - 1; i++) cin >> B[i];
    sort(A, A + N, greater<int>());
    sort(B, B + N - 1, greater<int>());
    
    /*
    for (int i = 0; i < N; i++) cout  << A[i] << " ";
    cout << endl;
    for (int i = 0; i < N - 1; i++) cout  << B[i] << " ";
    cout << endl;
    */
    
    
    int j = 0, key = 0;
    int ans;
    for (int i = 0; i < N - 1; i++){
        if (B[i] >= A[j]) j++;
        else {
            key++;
            if (key > 1) break;
            ans = A[j];
            i--;
            j++;
        }
    }
    if (key == 1) cout << ans << endl;
    else if (key == 0) cout << A[N - 1] << endl; 
    else cout << -1 << endl;
}