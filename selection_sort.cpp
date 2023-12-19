#include <iostream>
using namwespace std;
 
// H�m doi cho 2 so nguy�n
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// H�m selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyen ranh gioi cua mang da sap xep v� chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // T�m phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // swap phan tu nho nhat voi phan tu dau ti�n
        swap(arr[min_idx], arr[i]);
    }
}


