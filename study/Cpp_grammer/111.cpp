#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i=0; i<N; i++){
    string op;
    int x;
    cin >> op >> x;
    if (op=="+"){
        A += x;
    }
    else if (op=="-"){
        A -= x;
    }
    else if (op=="*"){
        A *= x;
    }
    else if (op=="/" && x!=0){
        A /= x;
    }
    else {
        cout << "error" << endl;
        break;
    }
    cout << i+1 << ":" << A << endl;
  }
}
