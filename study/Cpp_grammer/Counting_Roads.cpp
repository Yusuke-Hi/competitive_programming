#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> city(N);
    for (int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        city.at(a-1)++;
        city.at(b-1)++;
    }
    for (int j=0; j<N; j++){
        cout << city.at(j) << endl;
    }
}