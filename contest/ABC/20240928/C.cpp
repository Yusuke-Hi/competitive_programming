#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    //vector<int> A(N), B(N);
    int A, A_, B, B_;
    for (int i = 0; i < N; i++){
        cin >> A_;
        if (i == 0){
            A = A_;
        }
        else{
            if (A_ > A){
                A = A_;
            }
        }
    }
    for (int i = 0; i < N; i++){
        cin >> B_;
        if (i == 0){
            B = B_;
        }
        else{
            if (B_ > B){
                B = B_;
            }
        }
    }
    cout << A + B << endl;
}