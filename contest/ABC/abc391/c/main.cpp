#include <bits/stdc++.h>
using namespace std;

int move(int q, int h, int *hive){
    hive[q - 1]--;
    hive[h - 1]++;
    if (*(hive+q-1) == 0 && *(hive+h-1) == 2 || (*(hive+q-1) >= 2 && *(hive+h-1)==2)){
        return 1;
    } 
    else if (*(hive+q-1)==1 && *(hive+h-1)<2) return -1;
    else return 0;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    // int hive[n];
    // for (int i = 0; i < n; i++) hive[i] = 1;

    vector<vector<int>> hive(n + 1, vector<int>());
    for (int i = 1; i <= n; i++) hive.at(i).push_back(i);

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= hive.at(i).size(); j++){
            cout << hive.at(i).at(j) << endl;
        }
    }

    // int ans = 0;
    // int query, p, h;
    // for (int i = 0; i < q; i++){
    //     cin >> query;
    //     if (query == 1){
    //         cin >> p >> h;
            
    //     }
    //     else cout << ans << endl;
    // }
}