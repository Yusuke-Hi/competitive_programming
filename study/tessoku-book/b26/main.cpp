#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime[n + 1];
    for (int j = 2; j < n + 1; j++) isPrime[j] = true;
    for (int i = 2; i * i < n; i++){
        for (int j = 2; j < n + 1; j++){
            if (j % i != 0) isPrime[j] = false;
        }
    }

    for (int j = 2; j < n + 1; j++){
        if (isPrime[j] = true) cout << j << endl;
    }
}