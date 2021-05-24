#include "f1.c"
#include<stdio.h>

int main()
{
int *a;
a=fun();
printf("%d\n",*a);
*a=21;
printf("%d\n",*(fun()));

return 0;
}
