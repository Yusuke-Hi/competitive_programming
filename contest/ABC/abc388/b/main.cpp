#include <bits/stdc++.h>
using namespace std;

int n, d;

int get_weight(int j, int t[109], int l[109]){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(t[i] * (l[i] + j), ans);
    }
    return ans;
}

int main() {
    cin >> n >> d;
    int t[109], l[109];
    for (int i = 0; i < n; i++) cin >> t[i] >> l[i];

    for (int j = 1; j <= d; j++){
        cout << get_weight(j, t, l) << endl; 
    }
}