#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    int query, l, k;
    long long k_offset = 0, h_offset = 0;
    vector<int> l_li;
    vector<long long> head;
    for (int i = 0; i < q; i++){
        cin >> query;
        if (query == 1){
            if (i == 0) head.push_back(0);
            else head.push_back(head.back() + l);
            cin >> l;
            l_li.push_back(l);
        }
        else if (query == 2){
            //k_offset += l_li.at(h_offset);
            h_offset++;
        }
        else{
            cin >> k;
            //cout << head.at(h_offset + k - 1) - k_offset << endl;
            cout << head.at(h_offset + k - 1) - head.at(h_offset) << endl;
        }
    }
}