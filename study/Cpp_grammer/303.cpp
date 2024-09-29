#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, x;
    cin >> N;
    map<int, int> data;
    for (int i = 0; i < N; i++){
        cin >> x;
        data[x]++;
    }
    int max_x = 0;
    for (int i = 0; i < N - 1; i++){
        //cout << i << " " << data[i] << endl;
        if (data[i] < data[i+1]){
            max_x = i + 1;
        }
    }
    cout << max_x << " " << data.at(max_x) << endl;
}