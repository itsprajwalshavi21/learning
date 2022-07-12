#include <stdio.h>

int n = 1;
int counter = 0;
int *Vector;

int size()
{
}

int capacity()
{
    return n;
}

int push_back(int data)
{
    if (counter > n)
    {
        resize();
    }

    Vector[counter] = data;
}

void resize()
{
    n = n * 2;
    Vector = (int *)malloc(sizeof(int) * n);
    
}

int main()
{
    Vector = (int *)malloc(sizeof(int) * n);
    push_back(5);
    return 0;
}