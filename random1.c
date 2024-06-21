//program to generate random numbers between 0 t0 49
#include "header.h"
void main()
{
 int a[5],i;
 srand(getpid());
 for(i=0;i<5;i++)
 a[i]=rand()%100-50;
 for(i=0;i<5;i++)
 printf("%d ",a[i]);
 }
