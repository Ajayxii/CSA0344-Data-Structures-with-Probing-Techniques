#include <stdio.h>
#include<conio.h>
int main()
{
   int a[100], search, i, n;
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
   printf("Enter elements:");
     for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
   printf("Enter the number to search\n");
   scanf("%d", &search);
   for (i = 0; i < n; i++)
   {
      if (a[i] == search)     
      {
	 printf("%d is present at location %d.\n", search, i+1);
	 break;
      }
   }
   if (i == n)
      printf("%d is not present in array.\n", search);
   getch();
}

