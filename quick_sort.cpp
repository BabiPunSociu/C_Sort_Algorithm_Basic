#include<iostream>

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++; 		// T�m phan tu >= arr[pivot]
        while(right >= left && arr[right] > pivot) right--; 	// T�m phan tu <= arr[pivot]
        if (left >= right)
			break; 								// �� duyet xong th� tho�t v�ng loop
		swap(&arr[left], &arr[right]); 							// Neu chua xong, doi cho.
        left++; 												// V� left hien tai d� x�t, n�n can tang
        right--; 												// V� right hien tai d� x�t, n�n can giam
    }
    
    swap(&arr[left], &arr[high]);
    return left; 								// Tra ve chi so se d�ng de chia doi mang
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi l� chi so noi phan tu n�y d� d�ng vi tr� v� l� phan tu chia mang l�m 2 mang con tr�i & phai */
        int pi = partition(arr, low, high);
 
        // Goi de quy sap xep 2 mang con tr�i v� ph?i
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
