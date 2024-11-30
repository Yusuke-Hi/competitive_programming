#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  
    int A[200009], B[200009];
    int low = 200009;
    for(int i = 1; i < N + 1; i++){
        cin >> A[i];
        low = min(low, A[i]);
    }
    for(int i = 1; i < N + 1; i++) cin >> B[i];

    //cout << low << endl;
    for(int j = 1; j < M + 1; j++){
        
        if(B[j] < low){
            cout << -1 << endl;
            continue;
        }
        
        for(int i = 1; i < N + 1; i++){
            if(B[j] >= A[i]){
                cout << i << endl;
                break;
            }
        }
    }
}