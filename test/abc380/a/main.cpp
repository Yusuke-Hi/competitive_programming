#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s = to_string(N);
    
    int f1 = 0, f2 = 0, f3 = 0;
    for (int i = 0; i < 6; i++){
        if (s[i] == '1') f1++;
        else if (s[i] == '2') f2++;
        else if (s[i] == '3') f3++;
        else break;
    }
    if (f1 == 1 && f2 == 2 && f3 == 3){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}