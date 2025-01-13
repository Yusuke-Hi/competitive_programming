#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a, b;
    vector<vector<int>> graph(n + 1);
    for (int i = 1; i <= m; i++){
        cin >> a >> b;
        graph.at(a).push_back(b);
        graph.at(b).push_back(a);
    }

    int ans = 0, num_f = 0;
    for (int j = 1; j <= n; j++){
        if (graph.at(j).size() > num_f){
            ans = j;
            num_f = graph.at(j).size();
        }
    } 
    cout << ans << endl;
}