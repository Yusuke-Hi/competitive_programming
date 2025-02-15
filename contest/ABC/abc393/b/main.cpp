
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s.insert(0, " ");
    int long long ans = 0;
    for (int i = 1; i < s.size(); i++){
      for (int j = i + 1; j < s.size(); j++){
        for (int k = j + 1; k < s.size(); k++){
          if (2 * j == i + k && s[i] == 'A' && s[j] == 'B' && s[k] == 'C'){
            // cout << i + 1 << j + 1 << k + 1 << ": ";
            // cout << s[i] << s[j] << s[k] << endl;
            ans++;
          }
        }
      }
    }
    cout << ans << endl;
}