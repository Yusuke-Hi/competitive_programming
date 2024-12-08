#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans;
    while (true){
        if (a > b){
            a %= b;
            if (a == 0){
                ans = b;
                break;
            }
        }
        else{
            b %= a;
            if (b == 0){
                ans = a;
                break;
            }
        }
    }
    cout << ans << endl;
}