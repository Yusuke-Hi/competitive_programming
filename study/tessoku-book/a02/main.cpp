#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == x){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}