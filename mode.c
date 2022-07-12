#include <stdio.h>
#include <stdlib.h>

int findMode(int *arr, int n, int *mode)
{
    for (int i = 0; i < n; i++)
    {
        int unique = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[j] != (-1) && arr[i] == arr[j])
            {
                unique++;
                arr[j] = -1;
            }
        }
        if (arr[i] != (-1))
        {
            printf("No of %d is %d\n", arr[i], unique + 1);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 1, 2, 2, 4, 5, 6, 7, 8, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mode[n];

    int no = findMode(arr, n, mode);
    return 0;
}