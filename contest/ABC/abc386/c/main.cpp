#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string s, t;
    cin >> k >> s >> t;

    if (s.size() == t.size()){
        int diff_cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s.at(i) != t.at(i)) diff_cnt++;
            if(diff_cnt > 1){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else if (s.size() == t.size() + 1){
        for (int i = 0; i < t.size(); i++){
            if(t.at(i) != s.at(i)){
                if(t.at(i) == s.at(i + 1)) continue;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else if (s.size() + 1 == t.size()){
        for (int i = 0; i < s.size(); i++){
            if(s.at(i) != t.at(i)){
                if(s.at(i) == t.at(i + 1)) continue;
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else cout << "No" << endl;
}