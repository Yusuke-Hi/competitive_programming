#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            for (int k = j + 1; k <= n; k++){
                if (a[i] + a[j] + a[k] == 1000){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}