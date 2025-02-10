#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double l = 1.0, r = 100.0; 
    while(true){
        double m = (l + r) / 2.0;
        double f = m * m * m + m;
        if (abs(f - n) < 0.0001){
            cout << m << endl;
            return 0;
        }
        else if (f > n) r = m;
        else l = m;
    }
}