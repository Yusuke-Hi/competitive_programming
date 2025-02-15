
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int u, v;

    long long ans = 0;
    unordered_map<int, set<int>> um;
    for (int i = 0; i < m; i++){
      cin >> u >> v;
      if (u == v) ans++;
      else{
        int s = min(u, v), b = max(u, v);
        if (um.find(s) == um.end()){
          um[s].insert(b);
        }
        else if(um.at(s).find(b) == um.at(s).end()){
          um[s].insert(b);
        }
        else ans++;
      }
    }

    cout << ans << endl;


    // vector<vector<int>> graph(n + 1);
    // for (int i = 0; i < m; i++){
    //   cin >> u >> v;
    //   graph.at(u).push_back(v);
    //   graph.at(v).push_back(u);
    // }

    // for (auto v : graph){
    //   for (auto num : v){
    //     cout << num << " ";
    //   }
    //   cout << endl;
    // }
}