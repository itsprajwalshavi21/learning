#include <stdio.h>

void update(int *a,int *b)
{
    int t1,t2;
    t1 = *a + *b;
    t2 = *a - *b;
    if (t2 < 0)
    {
        t2 = - t2;
    }
    *a = t1;
    *b = t2;
}

int main()
{
    int a = 4, b =5;
    printf("%d    %d\n",a,b);
    update(&a,&b);
    printf("%d    %d\n",a,b);

    return 0;
}