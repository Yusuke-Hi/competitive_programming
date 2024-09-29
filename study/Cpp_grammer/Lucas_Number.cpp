#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int64_t> data(N+1);
    data.at(0) = 2;
    data.at(1) = 1;
    for (int i = 2; i < N+1; i++){
        data.at(i) = data.at(i-2) + data.at(i-1);
    }
    cout << data.at(N) << endl;
}