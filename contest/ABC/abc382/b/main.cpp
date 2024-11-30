#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    string S;
    cin >> S;

    int i = N;
    while(D > 0){
        if(S[i] == '@'){
            S[i] = '.';
            D--;
        }
        i--;
    }
    cout << S << endl;
}