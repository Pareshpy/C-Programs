#include <stdio.h>
#include <conio.h>
int main()
{
int year;
char another;
char y,n;
 clrscr();
printf("\t\tLeap Year checker");
printf("\n\nEnter Year :");
scanf("%d",&year);

 if((year%4==0)&&(year%100!=0)||(year%400==0))
  {
    printf("%d is leap year",year);
  }
 else 
  {
    printf("%d is not a leap year",year);
  }

   printf("\n\nWanted to do another time(y/n)  :");
   scanf("%d",&another);
   getchar();
  
  if(another==y)
   {
     main();
   }
  else
   {
   return 0;
   }
}