#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++){
        cin >> S.at(i);
    }
    cin >> M;
    vector<string> T(M);
    for (int j=0; j<M; j++){
        cin >> T.at(j);
    }

    int result = 0;
    string tmp;
    for (int k=0; k<N; k++){
        int count = 0;
        tmp = S.at(k);
        for (int i=0; i<N; i++){
            if (tmp==S.at(i)){
                count++;
            }
        }
        for (int j=0; j<M; j++){
            if (tmp==T.at(j)){
                count--;
            }
        }
        if (count>result){
            result = count;
        }
    }
    if (result > 0){
        cout << result << endl;
    }
    else{
        cout << 0 << endl;
    }
}