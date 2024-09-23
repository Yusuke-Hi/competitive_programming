#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int dig1, dig2, dig3, dig4;
    dig1 = N - (N/10)*10;
    dig2 = N/10 - (N/100)*10;
    dig3 = (N/100) - (N/1000)*10;
    dig4 = N/1000; 
    //cout << dig4 <<", "<< dig3 <<", "<< dig2 <<", "<< dig1 << endl;
    if ((dig1==dig2 && dig2==dig3) || (dig2==dig3 && dig3==dig4)){
             //|| (dig3==dig4 && dig4==dig1) || (dig4==dig1 && dig1==dig2)){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" << endl;
    }
}