#include <bits/stdc++.h>
using namespace std;

long long factorial(int n){
    long long fac = 1;
    for (int i = 1; i <= n; i++) fac *= i;
    return fac;
}

int main() {
    long long x;
    cin >> x;

    for (int j = 1; j <= 20; j++){
        if (x == factorial(j)){
            cout << j << endl;
            return 0;
        }
    }
}