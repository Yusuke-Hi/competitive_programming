
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int num0;
    for (int i = 0; i < n; i++){
      if (s[i] == '1') num0++;
    }
    int cpos, numt = 0;
    for (int i = 0; i < n; i++){
      if (s[i] == '1'){
        numt++;
        if (numt == num0 / 2 + 1){
          cpos = i;
        }
      }
    }

    long long ans = 0;
    int cpos_l = cpos, cpos_r = cpos;
    for (int i = cpos - 1; i >= 0; i--){
      if (s[i] == '1'){
        ans += cpos_l - (i + 1);
        cpos_l--;
      }
    }
    for (int i = cpos + 1; i < n; i++){
      if (s[i] == '1'){
        ans += i - (cpos_r + 1);
        cpos_r++;
      }
    }

    // long long ans = 0;
    // for (int i = 1; i < n/2 + 1; i++){
    //   if (s[i - 1] == '1' && s[i] == '0'){
    //     s[i - 1] = '0';
    //     s[i] = '1';
    //     ans++; 
    //   }
    // }
    // for (int i = n - 1; i > n/2; i--){
    //   if (s[i + 1] == '1' && s[i] == '0'){
    //     s[i + 1] = '0';
    //     s[i] = '1';
    //     ans++;
    //   }
    // }
    // cout << s << endl;
    cout << ans << endl;
}