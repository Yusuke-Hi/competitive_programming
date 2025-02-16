
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) cin >> a[i];

  vector<int> t;
  for (int i = 1; i <= n; i++) t.push_back(a[i]);
  sort(t.begin(), t.end());
  t.erase(unique(t.begin(), t.end()), t.end());

  int b[n + 1];
  for (int i = 1; i <= n; i++){
    auto it = lower_bound(t.begin(), t.end(), a[i]);
    b[i] = it - t.begin();
    b[i]++;
  }

  for (int i = 1; i <= n; i++){
    if (i == n) cout << b[i];
    else cout << b[i] << " ";
  }
  cout << endl;
}