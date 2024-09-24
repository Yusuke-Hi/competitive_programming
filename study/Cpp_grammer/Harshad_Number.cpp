#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    string digits = to_string(N);
    //cout << digits << endl;
    int sum = 0;
    for (int i=0; i<to_string(N).length(); i++){
        //cout << digits[i] << endl;
        int digit = digits[i] - '0';
        sum += digit;
    }
    //cout << sum << endl;
    if (N%sum==0){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}