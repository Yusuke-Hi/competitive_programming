#include <bits/stdc++.h>
using namespace std;


int N;
double L = 0, R = 100;

bool check_answer(double er){
    double ab_er = abs(er);
    double re_er = (ab_er) / N;
    if (ab_er <= 0.000001 || re_er <= 0.000001) return true;
    else false;
}

double BinarySearch(){
    while(L < R){
        double M = (L + R) / 2;
        double er = (pow(M, 3) + M) - N;
        bool c_a = check_answer(er);
        bool size;
        if (c_a == true) return M;
        else {
            size = (er > 0);
            if (size) R = M;
            else L = M;
        }
        //cout << size << " " << "L: " << L << " " << "R: " << R <<" " << "M: " << M << endl;
    }
    return L;
}

int main() {
    cin >> N;
    double ans = BinarySearch();
    printf("%.12lf\n", ans);
    //cout << pow(ans, 3) + ans - N << endl;
}