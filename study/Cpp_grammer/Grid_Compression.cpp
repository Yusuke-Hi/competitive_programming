#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<string>> data(H, vector<string>(W));
    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            cin >> data.at(i).at(j);
        }
    }
    vector<int> com_H(H, 0);
    for (int i=0; i<H; i++){
        int count = 0;
        for (int j=0; j<W-1; j++){
            if (data.at(i).at(j) == data.at(i).at(j+1)){
                count++;
            }
        }
        if (count == W-1){
            com_H.at(i) = 1;
        }
    }
    vector<int> com_W(W, 0);
    for (int j=0; j<W; j++){
        int count = 0;
        for (int i=0; i<H-1; i++){
            if (data.at(j).at(i) == data.at(j).at(i+1)){
                count++;
            }
        }
        if (count == H-1){
            com_W.at(j) = 1;
        }
    }
    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            if ((com_H.at(i)==1) || (com_W.at(j)==1)){
                continue;
            }
            else{
                cout << data.at(i).at(j);
            }
        }
        cout << endl;
    }
}