//program to generate 5 ,three digit random numbers
#include "header.h"
void main()
{
 int a[5],i;
 srand(getpid());
 for(i=0;i<5;i++)
 a[i]=rand()%1000;
 for(i=0;i<5;i++)
 printf("%d ",a[i]);
 printf("\n");
 }
