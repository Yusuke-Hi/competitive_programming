#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a, b, c;
    a = N / 100;
    b = (N - a * 100) / 10;
    c = (N - a * 100 - b * 10);
    /*
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    */
    
    cout << b << c << a << " " 
        << c << a << b << endl;
        
}