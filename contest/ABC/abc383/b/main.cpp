#include <bits/stdc++.h>
using namespace std;

int h, w, d;
char s[15][15];

int hum(int i, int j){
    int tmp = 1;
    for (int i2 = 1; i2 < h + 1; i2++){
        for (int j2 = 1; j2 < w + 1; j2++){
            if ((i2 == i && j2 == j) || s[i2][j2] == '#' || abs(i - i2) + abs(j - j2) > d){
                continue;
            }
            tmp++;
        }
    }
}

int main() {
    cin >> h >> w >> d;
    for (int i = 0; i < h + 1; i++) s[i][0] = '#';
    for (int j = 0; j < w + 1; j++) s[0][j] = '#';
    
    for (int i = 1; i < h + 1; i++){
        for (int j = 1; j < w + 1; j++) cin >> s[i][j];
    }


    int ans = 0;
    for (int i = 1; i < h + 1; i++){
        for (int j = 1; j < w + 1; j++){
            if (s[i][j] == '.'){
                int tmp = 0;

            }
        }
    }

    cout << ans << endl;
}