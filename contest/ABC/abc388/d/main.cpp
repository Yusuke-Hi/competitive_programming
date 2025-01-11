#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) cin >> a.at(2).at(i);

    for (int y = 2; y <= n; y++){
        int count0 = 0;
        for (int i = 1; i <= y; i++){
            if (a.at(i) == 0) count0++;
            if (y == i){
                if (a.at(i) + i - 1 - count0 >= 0) a.at(i) += i - 1 - count0;
                else a.at(i) = 0;
            }
            else{
                if (a.at(i) > 0) a.at(i)--;
            }
        }
    }

    for (int i = 1; i <= n; i++) cout << a.at(i) << " ";
    cout << endl;
}