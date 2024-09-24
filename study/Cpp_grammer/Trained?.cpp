#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a[N+1];
    for (int i=1; i<N+1; i++){
        cin >> a[i];
    }
    int tmp = 1, j = 0, count = 0;
    bool found = false;
    while (j<N){
        tmp = a[tmp];
        count++;
        if (tmp==2){
            found = true;
            break;
        }
        j++;
    }
    if (found==true){
        cout << count << endl;
    }
    else{
        cout << -1 << endl;
    }
}