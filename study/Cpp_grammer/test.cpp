#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> data = {1,2,3,4};
    int x = 0;
    for (int i = 0; i < data.size(); i++){
        x = max(x, data.at(i));
    }
    cout << x << endl;
}