#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, x;
    cin >> N;
    map<int, int> data;
    data[0] = 0;
    set<int> S;
    for (int i = 0; i < N; i++){
        cin >> x;
        S.insert(x);
        data[x]++;
    }
    int max_x = 0;
    if (S.size() != 0){
        for (int x : S){
            if (data.at(x) > data.at(max_x)){
                max_x = x;
            }
        }
        cout << max_x << " " << data.at(max_x) << endl;
    }
    
}