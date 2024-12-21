#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string tiles;
    cin >> n;
    cin >> tiles;
    
    int cnt = 0;
    for (int i = 1; i < tiles.size(); i++){
        if (tiles[i - 1] == tiles[i]){
            cnt++;
            //cout << cnt << endl;
            if (cnt >= 2){
                cout << "Yes" << endl;
                return 0;
            }
        }
        else cnt = 0;
    }
    cout << "No" << endl;
}