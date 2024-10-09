#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    for (int i = 9; i >= 0; i--){
        int x = (N / (int)pow(2, i)) % 2;
        cout << x;
    }
    cout << endl;
    
}