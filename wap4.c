#include<stdio.h>

int main() {
   int a[100], n, i, loc, key;

   printf("Enter number of elements: \n");
   scanf("%d", &n);

   printf("Enter elements: \n");
   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   printf("Enter location to insert the element: \n");
   scanf("%d", &loc);

   printf("Enter the element: \n");
   scanf("%d", &key);

   // Shifting elements to right
   for (i = n - 1; i >= loc - 1; i--) {
      a[i + 1] = a[i];
   }

   // Inserting the element at given location
   a[loc - 1] = key;

   printf("Array after inserting the element: \n");
   for (i = 0; i <= n; i++) {
      printf("%d\t", a[i]);
   }

   return 0;
}
