#include <stdio.h>
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Hàm sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phan tu cuoi cùng dã duoc sap xep
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiem tra lân loop này có swap không
            }
        }
        // Neu không có swap nào duoc thuc hien => mang dã sap xep. Không can loop thêm
        if(haveSwap == false){
            break;
        }
    }
}
