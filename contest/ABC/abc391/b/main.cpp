#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char s[n + 1][n + 1], t[m + 1][m + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cin >> s[i][j];
    }
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= m; j++) cin >> t[i][j];
    }

    for (int a = 1; a <= n - m + 1; a++){
        for (int b = 1; b <= n - m + 1; b++){
            int count = 0;
            for (int i = 1; i <= m; i++){
                for (int j = 1; j <= m; j++){
                    if (a + i - 1 <= n && b + j - 1 <= n && s[a + i - 1][b + j - 1] == t[i][j]) count++;
                }
            }
            if (count == m * m){
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
}