
#include <bits/stdc++.h>
using namespace std;

// string get_bit(int j, int n_){
//     string bit;
//     for (int i = 0; i < n_; i++){
//         if (j % 2 == 1) bit.push_back('1');
//         else bit.push_back('0');
//         j /= 2;
//     }
//     return bit;
// }

vector<long long> make_sumlist(vector<int> a){
    vector<long long> sumlist;
    for (int j = 0; j < (1 << a.size()); j++){
        long long tmp_sum = 0;
        bitset<15> bit(j);
        for (int i = 0; i < 15; i++){
            if (bit[i] == 1) tmp_sum += a[i];
        }
        sumlist.push_back(tmp_sum);
    }
    return sumlist;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> a_1, a_2;
    for (int i = 0; i < n/2; i++) a_1.push_back(a[i]);
    for (int i = n/2; i < n; i++) a_2.push_back(a[i]);

    vector<long long> x, y;
    x = make_sumlist(a_1);
    y = make_sumlist(a_2);
    // for (int j = 0; j < (1 << a_1.size()); j++){
    //     long long tmp_sum = 0;
    //     string bit = get_bit(j, a_1.size());
    //     for (int i = 0; i < bit.size(); i++){
    //         if (bit.at(i) == '1'){
    //             tmp_sum += a_1.at(i);
    //         }
    //     }
    //     x.push_back(tmp_sum);
    // }
    // for (int j = 0; j < (1 << a_1.size()); j++){
    //     long long tmp_sum = 0;
    //     bitset<15> bit(j);
    //     for (int i = 0; i < 15; i++){
    //         if (bit[i] == 1) tmp_sum += a_1[i];
    //     }
    //     x.push_back(tmp_sum);
    // }

    // for (int j = 0; j < (1 << a_2.size()); j++){
    //     long long tmp_sum = 0;
    //     string bit = get_bit(j, a_2.size());
    //     for (int i = 0; i < bit.size(); i++){
    //         if (bit.at(i) == '1'){
    //             tmp_sum += a_2.at(i);
    //         }
    //     }
    //     y.push_back(tmp_sum);
    // }

    // for (auto x_ : x) cout << x_ << " ";
    // cout << endl;
    // for (auto y_ : y) cout << y_ << " ";
    // cout << endl;
    sort(y.begin(), y.end());
    for (auto x_ : x){
        auto it = lower_bound(y.begin(), y.end(), k - x_);
        if (*it == k - x_){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}