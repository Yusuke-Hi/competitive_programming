#include <bits/stdc++.h>
using namespace std;

int move_num(int n, int from, int to, int ng){
    if (to < from) swap(from, to);
    if (from < ng and ng < to) return from + n - to;
    else return to - from;
}

int main() {
    int n, q;
    cin >> n >> q;
    int ans = 0;
    int l = 1, r = 2;
    for (int i = 0; i < q; i++){
        char h;
        int t;
        cin >> h >> t;
        if (h == 'L'){
            ans += move_num(n, l, t, r);
            l = t;
        } else{
            ans += move_num(n, r, t, l);
            r = t;
        }
    }
    cout << ans << endl;

}
