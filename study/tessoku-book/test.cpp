#include <bits/stdc++.h>

using namespace std;

int main() {
    int card_n, goal; 
    cin >> card_n >> goal;
    int cards[card_n + 1];
    for (int i = 1; i <= card_n; i++) cin >> cards[i];

    for (int j = 0; j < (1 << card_n); j++){
        int ncase = j;
        int sum = 0;
        for (int k = 1; k <= card_n; k++){
            //cout << ncase % 2;
            if (ncase % 2 == 1) sum += cards[k];
            ncase /= 2;
        }
        cout << endl;
        if (sum == goal){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}