#include <bits/stdc++.h>
using namespace std;

int move(int q, int h, int *hive){
    hive[q - 1]--;
    hive[h - 1]++;
    if (*(hive+q-1) == 0 && *(hive+h-1) == 2 || (*(hive+q-1) >= 2 && *(hive+h-1)==2)){
        return 1;
    } 
    else if (*(hive+q-1)==1 && *(hive+h-1)<2) return -1;
    else return 0;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    int pos[n + 1], cnt[n + 1];
    for (int i = 1; i <= n; i++){
        pos[i] = i;
        cnt[i] = 1;
    }
    int ans = 0;
    for (int i = 0; i < q; i++){
        int query, p, h;
        cin >> query;
        if (query == 1){
            cin >> p >> h;
            if (cnt[pos[p]] == 2) ans--; 
            cnt[pos[p]]--;
            pos[p] = h;
            if (cnt[pos[p]] == 1) ans++;
            cnt[pos[p]]++;
        }
        else cout << ans << endl;
    }
}