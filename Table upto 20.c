// Program to display table up to 20 
#include<stdio.h>
int main ()
{
  int i, x, n;
  printf("enter the number of values: \n");
  scanf("%d" , &n);
  for(i=2; i<=20; i++)
    {
      printf("table of %d:\n",i);
      for(z=1; z<=n; z++)
        {
          printf("%d x %d = %d\n", i,z,i*z);
        }
    }
     return 0;
}
