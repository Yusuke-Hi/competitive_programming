#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, A;
    cin >> N >> A;
    int w;
    w = N % 500;
    if (w <= A){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}