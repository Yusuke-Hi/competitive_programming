#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int result = 1;
  for (int i=1; i<S.size(); i+=2){
    if (S.at(i)=='+'){
        result++;
    }
    else if (S.at(i)=='-'){
        result--;
    }
  }
  cout << result << endl;
}
