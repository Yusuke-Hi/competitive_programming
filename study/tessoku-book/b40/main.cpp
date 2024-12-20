#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i < n + 1; i++) cin >> a.at(i);

    vector<int> cnt(n, 0);
    for (int i = 1; i < n + 1; i++) cnt.at(a.at(i) % 100)++;
    for (int i = 1; i < n + 1; i++){
        if (cnt.at(i) == 0) cnt.erase(cnt.begin() + i);
    }
    long long ans;
    for (int i = 0; i < cnt.size(); i++){
        for (int j = 0; j < cnt.size(); j++){
            if (cnt.at(i) == cnt.at(j)) ans++;
        }
    }
}