#include <stdio.h>
#include <math.h>
 
/* Hàm sap xep su dung thuat toán sap xep chèn */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyen các phan tu có giá tri lon hon giá tri key
	   va
	   sau mot vi trí so voi vi trí ban dau cua nó */

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
