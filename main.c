#include "f1.c"
#include<stdio.h>
int *func();
int main()
{
int *a;
a=func();
*a=21;
printf("%d\n",*(func()));

return 0;
}
