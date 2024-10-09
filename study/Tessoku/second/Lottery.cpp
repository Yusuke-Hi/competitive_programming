#include <bits/stdc++.h>
using namespace std;

int main() {
    //in
    int N, Q;
    cin >> N;
    int A[N];
    for (int i = 1; i <= N; i++) cin >> A[i];
    cin >> Q;
    int L[Q], R[Q];
    for (int j = 1; j <= Q; j++) cin >> L[j] >> R[j];
    //cumulative
    int cum[N+1];
    cum[0] = 0;
    for (int i = 1; i <= N; i++) cum[i] = cum[i - 1] + A[i];
    //judge
    for (int j = 1; j <= Q; j++){
        int tmp = cum[R[j]] - cum[L[j] - 1];
        if ((R[j] - L[j] + 1) % 2 == 0){
            if (tmp > (R[j] - L[j] + 1) / 2) cout << "win" << endl;
            else if (tmp == (R[j] - L[j] + 1) / 2) cout << "draw" << endl;
            else cout << "lose" << endl;
        }
        else{
            if (tmp >= (R[j] - L[j] + 1) / 2 + 1) cout << "win" << endl;
            else cout << "lose" << endl;
        } 
    }
}