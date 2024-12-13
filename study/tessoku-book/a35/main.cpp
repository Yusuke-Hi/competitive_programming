#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(2009, vector<int>(2009));
    for (int j = 0; j < n; j++) cin >> a.at(1).at(j);

    
    int op;
    if (n % 2 == 0) op = 0;
    else op = 1;
    for (int i = 2; i < n; i++){
        if (op % 2 == 0){
            for (int j = 0; j < n + 1 - i; j++){
                a.at(i).at(j) = max(a.at(i - 1).at(j), a.at(i - 1).at(j + 1));
            }
        }
        else {
            for (int j = 0; j < n + 1 - i; j++){
                a.at(i).at(j) = min(a.at(i - 1).at(j), a.at(i - 1).at(j + 1));
            }
        }
        op++;
    }
    /*
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n + 1 - i; j++) cout << a.at(i).at(j) << " ";
        cout << endl;
    }
    */
    cout << max(a.at(n - 1).at(0), a.at(n - 1).at(1)) << endl;
}