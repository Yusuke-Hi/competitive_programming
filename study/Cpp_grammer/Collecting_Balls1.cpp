#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int x[N];
    int result = 0;
    for (int i=0; i<N; i++){
        cin >> x[i];
        if (x[i] > abs(K-x[i])){
            result += 2*abs(K-x[i]);
        }
        else{
            result += 2*x[i];
        }
    }
    cout << result << endl;
}