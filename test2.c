#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *a;
    int n = 1;

    a = (int*)malloc(sizeof(int)*n);
    a[0] = 1;
    a[1] = 1;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    return 0;
}