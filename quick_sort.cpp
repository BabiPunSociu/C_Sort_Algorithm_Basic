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
        while(left <= right && arr[left] < pivot) left++; 		// Tìm phan tu >= arr[pivot]
        while(right >= left && arr[right] > pivot) right--; 	// Tìm phan tu <= arr[pivot]
        if (left >= right)
			break; 								// Ðã duyet xong thì thoát vòng loop
		swap(&arr[left], &arr[right]); 							// Neu chua xong, doi cho.
        left++; 												// Vì left hien tai dã xét, nên can tang
        right--; 												// Vì right hien tai dã xét, nên can giam
    }
    
    swap(&arr[left], &arr[high]);
    return left; 								// Tra ve chi so se dùng de chia doi mang
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chi so noi phan tu này dã dúng vi trí và là phan tu chia mang làm 2 mang con trái & phai */
        int pi = partition(arr, low, high);
 
        // Goi de quy sap xep 2 mang con trái và ph?i
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
