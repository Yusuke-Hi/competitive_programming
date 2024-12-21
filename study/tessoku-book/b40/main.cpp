#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 9);
    for (int i = 1; i < n + 1; i++) cin >> a.at(i);

    vector<int> cnt(100, 0);
    for (int i = 1; i < n + 1; i++) cnt.at((a.at(i) % 100))++;

    long long ans = 0;
    for (int i = 0; i < 100; i++){
        for (int j = 99; j >= i; j--){
            if ((i + j) % 100 == 0){
                if (i != 50 && i != 0) ans += cnt[i] * cnt[j];
                else ans += cnt[i] * (cnt[i] - 1) / 2;
                //cout << "i: " << i  << ", "<< "j: " << j << ", "<< "ans: " << ans << endl;
                break;
            }
        }
        
    }
    
    cout << ans << endl;
    
}