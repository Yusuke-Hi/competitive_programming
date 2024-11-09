#include <bits/stdc++.h>
using namespace std;

queue<int> que;

void query2(int T){
    int size = que.size();
    for (int i = 0; i < size; i++){
        int front = que.front();
        que.pop();
        front += T;
        que.push(front);
    }
}

void query3(int H){
    int size = que.size();
    int ans = 0;
    for (int i = 0; i < size; i++){
        int front = que.front();
        //cout << front << endl;
        que.pop();
        if (front >= H) ans++;
        else que.push(front);
    }
    cout << ans << endl;
}

int main() {
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int query;
        cin >> query;
        if (query == 1) que.push(0);
        else if (query == 2){
            int T;
            cin >> T;
            query2(T);
        }
        else{
            int H;
            cin >> H;
            query3(H);
        }
    }
}