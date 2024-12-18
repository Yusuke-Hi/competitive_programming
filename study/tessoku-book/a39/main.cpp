#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l[300009], r[300009];
    vector<pair<int , int>> tmp_vec;
    for (int i = 1; i < n + 1; i++) {
        cin >> l[i] >> r[i];
        tmp_vec.push_back(make_pair(r[i], l[i]));
    }
    
    sort(tmp_vec.begin(), tmp_vec.end());

    for (int i = 1; i < n + 1; i++){
        r[i] = tmp_vec[i - 1].first;
        l[i] = tmp_vec[i - 1].second;
    }

    int current_t = 0, ans = 0;
    for (int i = 1; i < n + 1; i++){
        if (current_t > l[i]) continue;
        current_t = r[i];
        ans++;
    }
    
    cout << ans << endl;
}