#include <bits/stdc++.h>
using namespace std;



int inout(int &i, int &j, int &r){
    if (sqrt(pow((i + 0.5), 2) + pow((j + 0.5), 2)) < r){
        return 1;
    }
    else return 0;
}

int main() {
    int r;
    cin >> r;

    long long ans = 1 + (r - 1) * 4;
    long long other = 0;
    for (int i = 1; i < r;i++){
        for (int j = 1; j < r; j++){
            other += inout(i, j, r);
        }
    }
    cout << ans + other * 4 << endl;
}