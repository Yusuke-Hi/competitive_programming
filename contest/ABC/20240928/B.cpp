#include <bits/stdc++.h>
using namespace std;
int main() {
    string S, base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> S;
    int tmp, result = 0;
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 26; j++){
            if (base.at(i) == S.at(j)){
                if (i == 0){
                    tmp = j + 1;
                    break;
                }
                result += abs(tmp - (j + 1));
                tmp = j + 1;
                break;
            }
        }
    }
    cout << result << endl;
}