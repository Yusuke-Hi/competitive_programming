#include <bits/stdc++.h>
using namespace std;

int func(int i, int count){
    return i + 10 * count;
} 

int main() {
    int N, M;
    cin >> N >> M;

    string s = to_string(M);
    //cout << s[s.size() - 1];
    int f_dig = s[s.size() - 1] - '0';
    //cout << f_dig << endl;
    
    vector<vector<int>> ans;
    while(true){
        vector<int> tmp;
        for(int i = 1; i < N + 1; i++){
            int count = 0;
            while(true){
                int fac = i + 10 * count
            }
            count++;
        }
        if() break;
    }
    
}