
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n + 1], b[n + 1];
  for (int i = 2; i <= n; i++) cin >> a[i];
  for (int i = 3; i <= n; i++) cin >> b[i];

  int dp[n + 1];
  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= n; i++){
    dp[i] = min(dp[i - 2] + b[i], dp[i - 1] + a[i]);
  }

  vector<int> path;
  int pos = n;
  path.push_back(pos);
  while(pos != 1){
    if (dp[pos] - a[pos] == dp[pos - 1]){
      pos--;
    }
    else{
      pos -= 2;
    }
    path.push_back(pos);
  }

  cout << path.size() << endl;
  for (int i = path.size() - 1; i >= 0; i--){
    if (i == 0) cout << path.at(i);
    else cout << path.at(i) <<" ";
  }
  cout << endl;
}