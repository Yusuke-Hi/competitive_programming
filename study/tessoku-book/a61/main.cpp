#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m + 1], b[m + 1];
    for (int i = 1; i <= m; i++) cin >> a[i] >> b[i];

    vector<vector<int>> gr(n + 1);
    for (int i = 1; i <= m; i++){
        gr.at(a[i]).push_back(b[i]);
        gr.at(b[i]).push_back(a[i]);
    }
    for (int i = 1; i <= n; i++){
        cout << i << ": {";
        for (int j = 0; j < gr.at(i).size() ; j++){
            if (j == gr.at(i).size() - 1){
                cout << gr.at(i).at(j);
            }
            else{
                cout << gr.at(i).at(j) << ", ";
            }
        }
        cout << "}" << endl;
    }
}