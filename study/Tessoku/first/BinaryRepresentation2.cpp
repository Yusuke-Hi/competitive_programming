#include <bits/stdc++.h>
using namespace std;
int main() {
    string N;
    cin >> N;
    int result = 0;
    for (int i =0 ; i < N.length(); i++){
        //cout << (int)(N[i] - '0') << ", " << pow(2, N.length() - (i + 1)) << endl;
        result += (int)(N[i] - '0') * pow(2, N.length() - (i + 1));
    }
    cout << result << endl;
}