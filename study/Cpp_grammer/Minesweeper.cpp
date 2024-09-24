#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W;
    cin >> H >> W;
    string S[H];
    for (int i=0; i<H; i++){
        cin >> S[i];
    }
    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            if (S[i].at(j)=='#'){
                S[i].at(j) = '#';
            }
            else{
                int bomb = 0;
                for (int k=-1; k<2; k++){
                    for (int l=-1; l<2; l++){
                        //cout << k << ", " << l << endl;
                        if (k==0 && l==0){
                            continue;
                        }
                        if (i+k>=0 && i+k<H && j+l>=0 && j+l<W){
                            if (S[i+k].at(j+l) == '#'){
                                bomb++;
                            }
                        }
                    }
                }
                S[i].at(j) = bomb + '0';
            }
        }
        cout << S[i] << endl;
    }
    
}