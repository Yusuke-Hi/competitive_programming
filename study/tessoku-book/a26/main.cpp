#include <bits/stdc++.h>
using namespace std;

bool prime_check(int x){
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int q, x;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> x;
        if (prime_check(x)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}