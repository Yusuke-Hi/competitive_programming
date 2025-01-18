#include <bits/stdc++.h>
using namespace std;



bool inout(long long &i, long long &j, long long &r){
    return (i + 0.5)*(i + 0.5) + (j + 0.5)*(j + 0.5) <= r*r;
}

int main() {
    long long r;
    cin >> r;

    long long ans = 1 + (r - 1) * 4;
    long long other = 0;
    long long j = r - 1;
    for (long long i = 1; i < r;i++){
        while (true){
            if (inout(i, j, r) == true){
                other += j;
                break;
            }
            else j--;
        }
    }
    cout << ans + other * 4 << endl;
}