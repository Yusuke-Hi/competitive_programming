#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    int x, find = 0;
    for (int i = 0; i < N; i++){
        cin >> x;
        if (x == X){
            cout << "Yes" << endl;
            find = 1;
            break;
        }
    }
    if (find == 0) cout << "No" << endl;
}