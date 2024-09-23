#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    cin.ignore();
    string s;
    getline(cin, s);
    int P_flg = 0, W_flg = 0, G_flg = 0, Y_flg = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' '){
            if (s[i] == 'P') {  // 修正: シングルクォートで文字を囲む
                P_flg = 1;
            } 
            else if (s[i] == 'W') {  // 修正
                W_flg = 1;
            } 
            else if (s[i] == 'G') {  // 修正
                G_flg = 1;
            } 
            else {
                Y_flg = 1;
            }

            if (P_flg + W_flg + G_flg + Y_flg == 4){
                break;
            }

        }
    }

    //cout << P_flg << W_flg << G_flg << Y_flg << endl;
    if (P_flg + W_flg + G_flg + Y_flg == 3) {
        cout << "Three" << endl;
    } 
    else {
        cout << "Four" << endl;
    }

}
