#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    v.erase(v.begin() + 2);
    for (int j = 0; j < v.size(); j++) cout << v.at(j) << endl;
}