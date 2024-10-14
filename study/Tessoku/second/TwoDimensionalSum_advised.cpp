#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> cumu1(H+1, vector<int>(W+1)), cumu2(H+1, vector<int>(W+1));

    int tmp, num;
    //cumulative col direction
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){
            cin >> tmp;
            if (j == 1) num = tmp;
            else num = num + tmp; 
            cumu1.at(i).at(j) = num;
        }
    }
    //cumulative row direction 
    for (int j = 1; j <= W; j++){
        for (int i = 1; i <= H; i++){
            if (i == 1) cumu2.at(i).at(j) = cumu1.at(i).at(j);
            else cumu2.at(i).at(j) = cumu2.at(i - 1).at(j) + cumu1.at(i).at(j);
        }
    }

    int Q;
    cin >> Q;
    vector<vector<int>> order(Q, vector<int>(4, 0));
    for (int k = 0; k < Q; k++){
        for (int l = 0; l < 4; l++){
            cin >> order.at(k).at(l);
        }
    }

    //display
    /*
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++) cout << cumu1.at(i).at(j) << " ";
        cout << endl;
    }
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++) cout << cumu2.at(i).at(j) << " ";
        cout << endl;
    }*/
    

    for (int k = 0; k < Q; k++){
        int result = 0;
        int row1 = order.at(k).at(0);
        int col1 = order.at(k).at(1);
        int row2 = order.at(k).at(2);
        int col2 = order.at(k).at(3);
        int first, second, third, fourth;
        if (row1 == 1 || col1 == 1) first = 0;
        else first = cumu2.at(row1 - 1).at(col1 - 1);
        if (row1 == 1) second = 0;
        else second = cumu2.at(row1 - 1).at(col2);
        if (col1 == 1) third = 0;
        else third = cumu2.at(row2).at(col1 - 1);
        fourth = cumu2.at(row2).at(col2) ;
        cout << fourth + first - (second + third) << endl;
    }
}