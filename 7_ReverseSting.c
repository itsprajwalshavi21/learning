#include <stdio.h>

int reverse(int x)
{
    int temp, rev = 0;
    temp = x;
    while (temp < 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    return rev;
}

int main()
{
    printf("%d",reverse(-123));
    return 0;
}