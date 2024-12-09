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

    bitset<60> 
}