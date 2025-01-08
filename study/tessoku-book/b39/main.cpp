#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;
    vector<pair<long long, long long>> xy;

    // 入力の受け取り
    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        xy.emplace_back(x, y);
    }

    // 開始日を基準にソート
    sort(xy.begin(), xy.end());

    // 最大報酬額を求める
    priority_queue<long long> pq;
    long long ans = 0;
    long long job_index = 0;

    for (long long current_day = 1; current_day <= d; current_day++) {
        // 今日から選べる仕事を追加
        while (job_index < n && xy[job_index].first <= current_day) {
            pq.push(xy[job_index].second);
            job_index++;
        }

        // 最大報酬の仕事を選択
        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans << endl;
    return 0;
}
