/*
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
 

Constraints:

1 <= k <= nums.length <= 104
-104 <= nums[i] <= 104

*/

#include <stdio.h>

int findKthLargest(int *nums, int numsSize, int k)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize  - i - 1; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return nums[k-1];
}

int main()
{
    int arr[] = {3,2,1,5,6,4};
    int n;
    n = findKthLargest(arr,6,2);
    printf("%d",n);
}