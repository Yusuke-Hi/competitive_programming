#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<int> graph[n + 1];
    for (int i = 1; i <= m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    } 

    queue<int> q;
    q.push(1);
    vector<int> dist(n + 1, -1);
    dist.at(1) = 0;

    while(!q.empty()){
        int pos = q.front();
        q.pop();
        for (auto ver : graph[pos]){
            if (dist.at(ver) == -1){
                dist.at(ver) = dist.at(pos) + 1;
                q.push(ver);
            }
        }
    }

    for (int j = 1; j <= n; j++) cout << dist.at(j) << endl;
}