#include <bits/stdc++.h>
using namespace std;

int main() {
    string d;
    cin >> d;

    for (char c : d){
        if (c == 'E') cout << 'W';
        else if (c == 'S') cout << 'N';
        else if (c == 'W') cout << 'E';
        else cout << 'S';
    }
    cout << endl;
}