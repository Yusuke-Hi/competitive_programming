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
    unique(B.begin(), B.end());
    for (int j = 0; j < B.size(); j++) cout << B.at(j) << " ";

    for (int i = 0; i < N; i++){
        //int L = 0, R = s.size() - 1;
        //if ()
    }

}