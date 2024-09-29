#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> data(N);
    for (int i = 0; i < N; i++){
        pair<int, int> p;
        //a, b
        cin >> p.second >> p.first;
        data.at(i) = p;
    }
    sort(data.begin(), data.end());
    for (int i = 0; i < N; i++){
        cout << data.at(i).second << " " << data.at(i).first << endl;
    }
}