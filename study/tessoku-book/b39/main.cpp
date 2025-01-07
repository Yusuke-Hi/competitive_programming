#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d, x, y;
    cin >> n >> d;
    vector<pair<long, long>> xy;
    for (long long i = 0; i < n; i++){
        cin >> x >> y;
        xy.emplace_back(x, y);
    }
    sort(xy.begin(), xy.end());
    //for (int i = 0; i < xy.size(); i++) cout << xy[i].first << " " << xy[i].second << endl;

    priority_queue<long long> pq;
    long long current_day = xy[0].first, ans = 0;
    for (long long i = 0; i < n; i++){
        if (xy[i].first > current_day){
            ans += pq.top();
            pq.pop();
            current_day = xy[i].first;
        }
        pq.push(xy[i].second);
        if (i == n - 1) ans += pq.top();
    }
    cout << ans << endl;
}