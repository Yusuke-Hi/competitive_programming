#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    int k = 0;
    int count, start1 = -1, start2 = -1;
    for (int i = 0; i < N; i++){
        if (i == 0 && s[i] == '1') k++;
        if (s[i - 1] == '0' && s[i] == '1') k++;

        if (start1 == -1 && k == K - 1){
                start1 = i;
                count = 1;
        }
        if (start2 == -1 && k == K){
            count = 1;
            start2 = i;
        }

        if (s[i - 1] == '1' && s[i] == '1') count++;
        if (s[i - 1] == '1' && s[i] == '0'){
            if (k == K - 1) start1 += count;
            else if (k == K){
                break;
            }
        }
    }

    for (int k = start2; k < start2 + count; k++) s[k] = '0';
    for (int j = start1; j < start1 + count; j++) s[j] = '1';
    
    cout << s << endl;
}