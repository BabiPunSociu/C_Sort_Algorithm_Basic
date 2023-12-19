#include <stdio.h>
#include <math.h>
 
/* H�m sap xep su dung thuat to�n sap xep ch�n */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyen c�c phan tu c� gi� tri lon hon gi� tri key
	   va
	   sau mot vi tr� so voi vi tr� ban dau cua n� */

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
