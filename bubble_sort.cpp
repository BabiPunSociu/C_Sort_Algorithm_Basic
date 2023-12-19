#include <stdio.h>
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// H�m sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phan tu cuoi c�ng d� duoc sap xep
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiem tra l�n loop n�y c� swap kh�ng
            }
        }
        // Neu kh�ng c� swap n�o duoc thuc hien => mang d� sap xep. Kh�ng can loop th�m
        if(haveSwap == false){
            break;
        }
    }
}
