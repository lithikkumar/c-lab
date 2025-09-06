#include<stdio.h>
#include<conio.h>
#include<math.h>m
void main()
{
  int n,i;
  clrscr();
  printf("Enter the value of n:5");
  scanf("%d", &n);
  printf("\nResult from 1to5 %d: \n",n);
  for (i=1; i <=n; ++i)
  {
   if (i %2 ==0)
  {
   printf("Even:%d1^3 = %.of\n",i, pow(i, 3));
  }
  else{
       printf("odd: %d 3^2 =%.of\n",i, pow(i, 2));
      }
  }
  getch();
}
