#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<tuple<string, int, int>> data(N), result(N);
    for (int i = 0; i < N; i++){
        tuple<string, int, int> t;
        cin >> get<0>(t) >> get<1>(t);
        get<2>(t) = i+1;
        data.at(i) = t;
    }
    //cout << "-------------" << endl;
    sort(data.begin(), data.end());
    vector<string> city_tmp;
    for (int i = 0; i < N-1; i++){
        city_tmp.push_back(get<0>(data.at(i)));
    }
    set<string> city(city_tmp.begin(), city_tmp.end());
    //reverse(city.begin(), city.begin());
    for (string c : city){
        vector<int> answer;
        for (int i = 0; i < N; i++){
            if (get<0>(data.at(i)) == c){
                answer.push_back(get<2>(data.at(i)));
            }
        }
        reverse(answer.begin(), answer.end());
        for (int j : answer){
            cout << j << endl;
        }
    }

}