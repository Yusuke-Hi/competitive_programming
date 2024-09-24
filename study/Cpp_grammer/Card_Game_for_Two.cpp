#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i=0; i<N; i++){
        cin >>  a.at(i);
    }
    sort(a.begin(), a.end(), greater<int>());
    int Alice = 0, Bob = 0;
    for (int j=0; j<N; j++){
        if (j%2==0){
            Alice += a.at(j);
        }
        else{
            Bob += a.at(j);
        }
    }
    cout << Alice - Bob << endl;
}