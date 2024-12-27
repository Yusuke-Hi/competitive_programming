#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    stack<string> st;
    int op;
    string book;
    for (int i = 0; i < q; i++){
        cin >> op;
        if (op == 1){
            cin >> book;
            st.push(book);
        }
        else if (op == 2) cout << st.top() <<endl;
        else st.pop();
    }
}