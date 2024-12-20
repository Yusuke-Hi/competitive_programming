#include <bits/stdc++.h>
using namespace std;

long long nc3(long long cases){
    /*
    int a = 1, b = 1, c = 3 * 2 * 1;
    for (int i = cases; i > 0; i--) a *= i;
    for (int i = cases - 3; i > 0; i--) b *= i;
    */
    return cases * (cases - 1) * (cases - 2) / 6;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

/*
    vector<long long> cnt(101, 0);
    for (int i = 0; i < n; i++) cnt[a.at(i)]++;

    vector<int> cnt(101, 0);
    for (int i = 0; i < n; i++){
        for (int j = 1; j < 101; j++){
            if (a.at(i) == j){
                cnt.at(j)++;
                break;
            }
        }
    }
*/
/*
    long long ans = 0;
    for (int j = 1; j < 101; j++){
        ans += nc3(cnt[j]);
    }
*/

    sort(a.begin(), a.end());
    long long ans = 0, cases = 0;
    for (int i = 0; i < n; i++){
        if (i == 0){
            cases++;
            continue;
        }
        if (a.at(i - 1) < a.at(i)){
            if (cases >= 3) ans += nc3(cases);
            cases = 0;
        }
        cases++;
        if (i == n - 1 && cases >= 3) ans += nc3(cases);
    }

    cout << ans << endl;
}