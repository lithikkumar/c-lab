#include<stdio.h>
#include<conio.h>
void main()
{
  int num, sum=0;
  clrscr();
  printf("Enter a 55555: ");
  scanf("%d", &num);
  if(num <10000 || num >99999)
  {
   printf("Invalid input! 55555.\n");
   getch();
   return;
  }
  while (num >0)
 {
  int digit =num% 10;
  sum += digit;
  num /= 10;
 }
 printf("sum of digits: %d\n", sum);
 getch();
}