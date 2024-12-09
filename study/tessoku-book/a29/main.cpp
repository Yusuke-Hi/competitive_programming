#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    const int mod = 1000000007;
    
    vector<long long> array;
    array.push_back(a);
    while((1 << array.size()) < b){
        a = (a * a) % mod;
        array.push_back(a);
    }
    //for (int i = 0; i < array.size(); i++) cout << array.at(i) << " ";
    //cout << endl;

    bitset<30> bs(b);
    //cout << bs << endl;
    long long ans = 1;
    for (int i = 0; i < array.size(); i++){
        if (bs[i] == 1) ans = (ans * array.at(i)) % mod; 
    }
    cout << ans << endl;
    //cout << ans % mod << endl;
}