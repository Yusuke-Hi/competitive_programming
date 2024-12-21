#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h + 1);
    string t;
    for (int i = 0; i < h; i++) cin >> s.at(i);
    cin >> t;
    //cout << s.at(2).at(2);

    int home = 0;
    for (int i = 0; i < t.size(); i++){
        if (t.at(i) == 'U'){
            if (x - 1 - 1 >= 0 && s.at(x - 1 - 1).at(y - 1) != '#'){
                x--;
                if (s.at(x - 1).at(y - 1) == '@'){
                    home++;
                    s.at(x - 1).at(y - 1) = '.';
                }
            }
        }
        else if (t.at(i) == 'D'){
            if (x - 1 + 1 < h && s.at(x).at(y - 1) != '#'){
                x++;
                if (s.at(x - 1).at(y - 1) == '@'){
                    home++;
                    s.at(x - 1).at(y - 1) = '.';
                }
            }
        }
        else if (t.at(i) == 'L'){
            if (y - 1 - 1 >= 0 && s.at(x - 1).at(y - 1 - 1) != '#'){
                y--;
                if (s.at(x - 1).at(y - 1) == '@'){
                    home++;
                    s.at(x - 1).at(y - 1) = '.';
                }
            }
        }
        else {
            if (y < w && s.at(x - 1).at(y) != '#'){
                y++;
                if (s.at(x - 1).at(y - 1) == '@'){
                    home++;
                    s.at(x - 1).at(y - 1) = '.';
                }
            }
        }
    }

    cout << x << " " << y << " " << home << endl;
}