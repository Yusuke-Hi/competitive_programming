#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    bool find = false;
    for (int i = A; i < B+1; i++){
        if (100 % i == 0){
            cout << "Yes" << endl;
            find = true;
            break;
        }
    }
    if (find == false){
        cout << "No" << endl;
    }
}