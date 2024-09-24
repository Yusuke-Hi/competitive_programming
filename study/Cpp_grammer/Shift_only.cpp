#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    int result = INT_MAX;
    for (int i=0; i<N; i++){
        cin >> A[i];
        int tmp = A[i], t = 0;
        while (true){
            if (t>=result){
                break;
            }
            else{
                if (tmp%2 == 0){
                    t++;
                    tmp /= 2;
                }
                else{
                    break;
                }
            }
        }
        if (t<result){
            result = t;
        }
    }
    cout << result << endl;
}