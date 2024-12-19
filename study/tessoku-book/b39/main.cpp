#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> jobs(n);
    for (int i = 1; i < n + 1; i++) cin >> jobs[i].first >> jobs[i].second;
    sort(jobs.begin(), jobs.end());

    vector<int> tmp;
    int current_t = 1;
    long long ans = 0;
    //i = 0から
    for (int i = 1; i < n + 1; i++){
        if (current_t < jobs[i].first && (!tmp.empty())){
            sort(tmp.begin(), tmp.end());
            ans += tmp.at(tmp.size() - 1);
            tmp.pop_back();
        }
        tmp.push_back(jobs[i].second);
        current_t = jobs[i].first;
        if (i == n && jobs[i - 1].first < jobs[i].first){
            sort(tmp.begin(), tmp.end());
            ans += tmp.at(tmp.size() - 1);
            tmp.pop_back();
        }
    }

    cout << ans << endl;
}