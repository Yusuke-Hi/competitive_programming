#include <bits/stdc++.h>
using namespace std;

// 配列の内容を表示する関数
void print_array(int X[], int size){
    for (int i = 0; i < size; i++) cout << X[i] << " ";
    cout << endl;
}

// 2つのソートされた部分配列をマージする関数
void merge(int X[], int left, int mid, int right) {
    // 左側と右側のサイズを計算
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 一時的な配列を作成
    int L[n1], R[n2];

    // データをコピー
    for (int i = 0; i < n1; i++)
        L[i] = X[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = X[mid + 1 + i];

    // 2つの部分配列をマージ
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            X[k] = L[i];
            i++;
        } else {
            X[k] = R[j];
            j++;
        }
        k++;
    }

    // 残りの要素をコピー
    while (i < n1) {
        X[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        X[k] = R[j];
        j++;
        k++;
    }
}

// マージソートを再帰的に行う関数
void merge_sort(int X[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // 左側をソート
        merge_sort(X, left, mid);

        // 右側をソート
        merge_sort(X, mid + 1, right);

        // ソートされた2つの部分をマージ
        merge(X, left, mid, right);
    }
}

int main() {
    // マージソート
    cout << "Merge sort" << endl;
    int size = 7;
    int A[] = {38, 27, 43, 3, 9, 82, 10};
    print_array(A, size);

    merge_sort(A, 0, size - 1);  // マージソートの呼び出し
    print_array(A, size);

    return 0;
}
