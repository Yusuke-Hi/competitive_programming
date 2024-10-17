#include <bits/stdc++.h>
using namespace std;

void print_array(int X[], int size){
    for (int i = 0; i < size; i++) cout << X[i] << " ";
    cout << endl;
}

//Bubble sort
void bubble_sort(int X[], int size){
    for (int i = size - 1; i > 0; i--){
        for (int j = i; j > 0; j--){
            if (X[j - 1] > X[j]){
                int tmp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = tmp;
            }
        }
    }
}

//Quick sort
int partition(int X[], int low, int high){
    int pivot = X[high];
    int i = low - 1;
    for (int j = low; j < high; j++){
        if (X[j] < pivot){
            i++;
            swap(X[i], X[j]);
        }
    }
    swap(X[i + 1], X[high]);
    return i + 1;
}
void quick_sort(int X[], int low, int high){
    if (low < high){
        int pi = partition(X, low, high);
        quick_sort(X, low, pi - 1);//left block
        quick_sort(X, pi + 1, high);//right block
    }
}

//Merge sort
void merge(int X[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = X[left + i];
    for (int i = 0; i < n2; i++) R[i] = X[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            X[k] = L[i];
            i++;
        }
        else{
            X[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        X[k] = L[i];
        i++;
        k++;
    }

    while ( j < n2){
        X[k] = R[j];
        j++;
        k++;
    }

}

void merge_sort(int X[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;
        merge_sort(X, left, mid);
        merge_sort(X, mid + 1, right);
        merge(X, left, mid, right);
    }
}

//Selection sort
void selection_sort(int X[], int size){
    for (int i = 0; i < size; i++){
        int minimum = INT_MAX;
        int idx_min;
        for (int j = i; j < size; j++){
            if (X[j] < minimum){
                minimum = X[j];
                idx_min = j;
            }
        }
        swap(X[i], X[idx_min]);
    }
}

//Insert sort
void sort(int X[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = i; j < size - 1; j++){
            if (X[j] > X[j + 1]) swap(X[j], X[j + 1]);
        }
    }
}
void insert_sort(int X[], int size){
    for (int i = 2; i < size; i++) sort(X, i);
}

int main() {
    //Bubble sort
    cout << "Bubble sort" << endl;
    int size = 6;
    int A[] = {1, 5, 9, 2, 7, 1};
    print_array(A, size);
    bubble_sort(A, size);
    print_array(A, size);

    //Quick sort
    cout << "Quick sort" << endl;
    int size_B = 9;
    int B[] = {3,5,9,8,1,7,2,4,6};
    print_array(B, size_B);
    quick_sort(B, 0, size_B - 1);
    print_array(B, size_B);

    //Merge sort
    cout << "Merge sort" << endl;
    int size_C = 7;
    int C[] = {38, 27, 43, 3, 9, 82, 10};
    print_array(C, size_C);
    merge_sort(C, 0, size_C - 1); 
    print_array(C, size_C);

    //Selection sort
    cout << "Selection sort" << endl;
    int size_D = 7;
    int D[] = {38, 27, 43, 3, 9, 82, 10};
    print_array(D, size_D);
    selection_sort(D, size_D); 
    print_array(D, size_D);

    //Insert sort
    cout << "Insert sort" << endl;
    int size_E = 7;
    int E[] = {38, 27, 43, 3, 9, 82, 10};
    print_array(E, size_E);
    insert_sort(E, size_E); 
    print_array(E, size_E);
}
