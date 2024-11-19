#include <bits/stdc++.h>
using namespace std;

int main() {
    int teiki = 9990;
    int oufuku = 2 * 272;
    //int day;
    for (int day = 18; day < 23; day++){
        int pay = oufuku * day;
        int point = oufuku * day * 0.12 + day*20;
        int temoto = teiki - pay + point;
        cout << "day: " << day << " temoto: " << temoto << " pay: " << pay << " point: " << point << endl;
    }
}