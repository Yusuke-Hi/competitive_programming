#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> cumu(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++){
        int tmp, num;
        for (int j = 1; j <= W; j++){
            //cin >> data.at(i).at(j);
            cin >> tmp;
            if (j == 1) num = tmp;
            else num = num + tmp; 
            cumu.at(i).at(j) = num;
        }
    }   
    /*
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++) cout << cumu.at(i).at(j) << " ";
        cout << endl;
    }
    */
    int Q;
    cin >> Q;
    vector<vector<int>> order(Q, vector<int>(4));
    for (int k = 0; k < Q; k++){
        for (int l = 0; l < 4; l++){
            cin >> order.at(k).at(l);
        }
    }

    for (int k = 0; k < Q; k++){
        int result = 0;
        int row1 = order.at(k).at(0);
        int col1 = order.at(k).at(1);
        int row2 = order.at(k).at(2);
        int col2 = order.at(k).at(3);
        for (int m = row1; m <= row2; m++){
            result += cumu.at(m).at(col2)
                        - cumu.at(m).at(col1 - 1);
        }
        cout << result << endl;

    }
}