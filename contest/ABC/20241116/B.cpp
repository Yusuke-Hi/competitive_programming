#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    vector<int> v;
    for (int i = 1; i < s.size(); i++){
        if (i != 0 && s[i] == '|'){
            v.push_back(count);
            count = 0;
        }
        else count ++;
    }
    for (int j = 0; j < v.size(); j++){
        if (j == 0) cout << v[j];
        else cout << " " << v[j];
    }
    cout << endl;
}