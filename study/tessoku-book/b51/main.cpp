#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<int> st;
    for (int i = 1; i < s.size() + 1 ; i++){
        st.push(i);
        if (s.at(i - 1) == ')'){
            int right = st.top();
            st.pop();
            int left = st.top();
            st.pop();
            cout << left << " " << right << endl;
        }
    }
}