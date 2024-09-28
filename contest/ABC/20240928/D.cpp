#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> x(N), flg(N, 0), u(M), v(M), w(M);
    for (int i = 0; i < M; i++){
        cin >> u.at(i) >> v.at(i) >> w.at(i);
    }
    for (int j = 0; j < M; j++){
        if (flg.at(j)==1){
            continue;
        }
        if (j == 0){
            x.at(u.at(j) - 1) = 0;
            flg.at(j) = 1;
        }
        //xv-xu = w
        x.at(v.at(j) - 1) = w.at(j) + x.at(u.at(j) - 1);
        flg.at(v.at(j) - 1) = 1;
    }
    for (int i = 0; i < N; i++){
        cout << x.at(i) << " ";
    }
    cout << endl;
}