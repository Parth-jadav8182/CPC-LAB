/*1. Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] ==
nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed). specifically, ans is the concatenation of two
nums arrays.
Return the array ans.
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int nums[n];
    int ans[2 * n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Logic: ans[i] = nums[i] and ans[i+n] = nums[i]
    for (i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    printf("Output: ");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}