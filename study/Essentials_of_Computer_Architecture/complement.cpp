#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<8> s(n);
    cout << "binary(s)" << ":" << s << endl;
    //2 compliment
    bitset<8> t(n - 1);
    t.flip();
    cout << "2 complement(t.flip())" << ":" << t << endl;
    //1 complement
    s.flip();
    cout << "1 complement(s.flip())" << ":" << s << endl;
    //sign complement
    s.flip();
    for (int i = 7; i >= 0; i--){
        //cout << s[i];
        if (s[i] == 1) break;
        s.set(i);
    }
    cout << "sign complement(s.flip()+1)" << ":" << s << endl;
}