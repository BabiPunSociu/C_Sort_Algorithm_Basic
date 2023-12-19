#include <iostream>
using namwespace std;
 
// Hàm doi cho 2 so nguyên
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyen ranh gioi cua mang da sap xep và chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // Tìm phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // swap phan tu nho nhat voi phan tu dau tiên
        swap(arr[min_idx], arr[i]);
    }
}


