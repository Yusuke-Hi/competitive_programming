#include <bits/stdc++.h>
using namespace std;

int endianness(bitset<8> &s, string e){
    if (e == "small"){
        for(int i = 0; i < 4; i++){
            int tmp = s[i];
            s[i] = s[7 - i];
            s[7 - i] = tmp;
        };
    }
}

int main() {
    int n;
    cin >> n;
    string e;
    cin >> e;
    bitset<8> s(n);
    cout << s << endl;
    endianness(s, e);
    for (int i = 0; i < 8; i++) cout << s[i];
}