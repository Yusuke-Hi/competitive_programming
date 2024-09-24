#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int result = 0;
    int a, b, c, d, e;
    for (int i=A; i<B+1; i++){
        a = i/10000;
        b = i/1000 - a*10;
        c = i/100 - (a*100 + b*10);
        d = i/10 - (a*1000 + b*100 + c*10);
        e = i - (a*10000 + b*1000 + c*100 + d*10);
        //cout << a << "," << b << ","<< c << ","<< d << ","<< e << endl;
        if ((a==e) && (b==d)){
            result++;
            //cout << "add" << endl;
        }
    }
    
    cout << result << endl;
}