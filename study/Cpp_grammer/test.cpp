#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> S;
    S.insert(5);
    S.insert(8);
    S.insert(1);
    /*
    for (int i = 0; i < S.size(); i++){
        cout << S.at(i) << endl;
    }
    */
    cout << "-----------" << endl;
    for (int s : S){
        cout << s << endl;
    }
}