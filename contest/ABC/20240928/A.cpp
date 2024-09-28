#include <bits/stdc++.h>
using namespace std;
int main() {
    //vector<string> data(12);
    int result = 0;
    string s;
    for (int i = 1; i < 13; i++){
        cin >> s;
        if (s.size() == i){
            result++;
        }
    }
    cout << result << endl;
}