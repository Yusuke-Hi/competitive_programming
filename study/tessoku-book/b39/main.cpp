#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    int x[2009], y[1000009];
    cin >> n >> d;
    for (int i = 1; i < n + 1; i++) cin >> x[i] >> y[i];

    vector<int> tmp;
    int current_t = 1;
    long long ans = 0;
    for (int i = 1; i < n + 1; i++){
        if (current_t < x[i]){
            sort(tmp.begin(), tmp.end());
            ans += tmp.at(tmp.size() - 1);
            tmp.pop_back();
        }
        tmp.push_back(y[i]);
    }
    
}