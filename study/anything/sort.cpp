#include <bits/stdc++.h>
using namespace std;

void print_array(int X[], int size){
    for (int i = 0; i < size; i++) cout << X[i] << " ";
    cout << endl;
}

//Bubble sort
void bubble_sort(int X[], int size){
    for (int i = size - 1; i > 0; i--){
        for (int j = size - 1; j > 0; j--){
            if (X[j - 1] > X[j]){
                int tmp = X[j - 1];
                X[j - 1] = X[j];
                X[j] = tmp;
            }
        }
    }
}

//Quick sort
void quick_sort(int X[], int size){
    
}

int main() {
    //Bubble_sort
    int size = 6;
    int A[] = {1, 5, 9, 2, 7, 1};
    print_array(A, size);
    bubble_sort(A, size);
    print_array(A, size);

    //Quick sort
    int size_B = 9;
    int B[] = {3,5,9,8,1,7,2,4,6};
    print_array(B, size_B);
    quick_sort(B, size_B);
    print_array(B, size_B);


}