#include<stdio.h>

int main() {
   int a[100], n, i, key, flag = 0;

   printf("Enter number of elements: \n");
   scanf("%d", &n);

   printf("Enter elements: \n");
   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   printf("Enter the element to search: \n");
   scanf("%d", &key);

   // Linear search algorithm
   for (i = 0; i < n; i++) {
      if (a[i] == key) {
         flag = 1;
         break;
      }
   }

   if (flag == 1) {
      printf("Element found at position %d\n", i + 1);
   }
   else {
      printf("Element not found\n");
   }

   return 0;
}
