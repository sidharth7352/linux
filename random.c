// program to generate 5 random numbers between 0 t0 100
#include"header.h"
void main()
{
 int a[5],i;
 srand(getpid());
 for(i=0;i<5;i++)
 a[i]=rand()%100+1;
 for(i=0;i<5;i++)
 printf("%d ",a[i]);
 printf("\n");
 }
