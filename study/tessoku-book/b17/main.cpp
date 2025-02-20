
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int h[n + 1];
  for (int i = 1; i <= n; i++) cin >> h[i];

  int dp[n + 1];
  dp[1] = 0;
  dp[2] = abs(h[2] - h[1]);
  for (int i = 3; i <= n; i++){
    int one_step = dp[i - 1] + abs(h[i] - h[i - 1]);
    int two_step = dp[i - 2] + abs(h[i] - h[i - 2]);
    dp[i] = min(one_step, two_step);
  }

  vector<int> path;
  int pos = n;
  path.push_back(pos);
  while(pos > 1){
    if (dp[pos] == dp[pos - 1] + abs(h[pos] - h[pos -1])){
      pos--;
    }
    else pos -= 2;
    path.push_back(pos);
  }

  reverse(path.begin(), path.end());
  cout << path.size() << endl;
  for (auto point : path){
    cout << point << " ";
  }
  cout << endl;
}