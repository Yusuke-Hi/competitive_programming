#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> B;
    for (int i = 0; i < N; i++) B.push_back(A[i]);
    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());
    //for (int j = 0; j < B.size(); j++) cout << B.at(j) << " ";
    //cout << endl;

    int ans[N];
    for (int i = 0; i < N; i++){
        int L = 0, R = B.size() - 1;
        if (A[i] == B[L]) ans[i] = L + 1;
        else if (A[i] == B[R]) ans[i] = R + 1;
        else{
            while (L < R){
                int M = (L + R) / 2;
                if (A[i] == B[M]){
                    ans[i] = M + 1;
                    break;
                }
                else if (A[i] > B[M]) L = M + 1;
                else R = M;
            }
        }
    }
    for (int i = 0; i < N; i++) cout << ans[i] << " ";
    cout << endl;
}