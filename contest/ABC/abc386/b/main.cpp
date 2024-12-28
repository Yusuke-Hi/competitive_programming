#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0, count_0 = 0;
    for (int i = 0; i < s.size(); i++){
        if (s.at(i) == '0'){
            if (count_0 == 1){
                ans++;
                count_0 = 0;
            }
            else{
                count_0++;
                if (i == s.size() - 1) ans++;
            }
        }
        else{
            if (count_0 == 1) ans++;
            ans++;
            count_0 = 0;
        }
    }
    cout << ans << endl;
}