#include <bits/stdc++.h>
using namespace std;


int N;
double L = 0.0, R = 100000.0;

bool check_answer(double ab_er){
    double re_er = (ab_er) / N;
    if (ab_er <= 0.001 || re_er <= 0.001) return true;
    else false;
}

double BinarySearch(){
    while(L < R){
        double M = (L + R) / 2;
        double ab_er = abs(N - (pow(M, 3) + M));
        bool c_a = check_answer(ab_er);
        if (c_a == true) return M;
        else {
            int size = (N < ab_er);
            if (size) R = M;
            else L = M + 0.0000001;
        }
        cout << size << " " << "L: " << L << " " << "R: " << R <<" " << "M: " << M << endl;
    }
    return L;
}

int main() {
    cin >> N;
    double ans = BinarySearch();
    cout << ans << endl;
}