#include <bits/stdc++.h>
using namespace std;

double calc(double k1, double k2, vector<int> v1, vector<int> v2){
    double mx = 0;
    int size = min(v1.size(), v2.size());
    for (int i = 0; i < size; i++){
        if (v1.at(i) == 0 || v2.at(i) == 0) continue;
        double prob1 = v1.at(i) / k1;
        double prob2 = v2.at(i) / k2;
        mx += prob1 * prob2;
    }
    return mx;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a;
    vector<double> k(109);
    for (int i = 0; i < n; i++){
        cin >> k.at(i);
        vector<int> tmp(100009);
        for (int j = 0; j < k.at(i); j++){
            int num;
            cin >> num;
            tmp.at(num)++;
        }
        a.push_back(tmp);
    }

    double ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            ans = max(ans, calc(k.at(i), k.at(j), a.at(i), a.at(j)));
        }
    }
    cout << std::setprecision(15) << ans << endl;
}