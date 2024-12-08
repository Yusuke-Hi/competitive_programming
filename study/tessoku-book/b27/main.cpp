#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long a_ = a, b_ = b;
    long long g;
    while(true){
        if (a > b){
            a %= b;
            if (a == 0){
                g = b;
                break;
            }
        }
        else {
            b %= a;
            if (b == 0){
                g = a;
                break;
            }
        }
    }
    
    cout << (long long)(a_ * b_) / g << endl;
}