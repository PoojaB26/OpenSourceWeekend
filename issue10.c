ECHO is on.
#include<stdio.h>
 
int main() {
   int a[20], i, j, k, size;
 
   printf("\nEnter array size : ");
   scanf("%d", &size);
 
   printf("\nEnter Numbers : ");
   for (i = 0; i < size; i++)
      scanf("%d", &a[i]);
 
   printf("\nArray with Unique list  : ");
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (a[j] == a[i]) {
            for (k = j; k < size; k++) {
               a[k] = a[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
 
   for (i = 0; i < size; i++) {
      printf("%d ", a[i]);
   }
 
   return (0);
}