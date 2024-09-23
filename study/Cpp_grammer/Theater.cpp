#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int result = 0;
    for (int i=0; i<N; i++){
        int l, r;
        cin >> l >> r;
        result += r - l + 1;
    }
    cout << result << endl;
}