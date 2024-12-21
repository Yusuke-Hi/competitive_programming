#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n + 1);
    for (int i = 0; i < n; i++) cin >> h.at(i);

    set<int> s;
    for (int i = 0; i < n; i++) s.insert(h.at(i));
    for (auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
    cout << endl;
/*
    int ans = 1;
    for (int )
    */
}