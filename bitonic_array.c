/*Given an array  arr of n integers, find the length of the longest bitonic 
subarray. A bitonic subarray is a subarray that first increases and then 
decreases.
Input: arr = [12, 4, 78, 90, 45, 23]
Output: 5*/
#include <stdio.h>
int longestBitonicSubarray(int* arr, int n)
{
    int i, j;
    int maxLength = 1;

    for(i = 0; i < n; i++)
    {
        j = i;

        /* Increasing part */
        while(j < n - 1 && arr[j] < arr[j + 1])
        {
            j++;
        }

        /* Decreasing part */
        while(j < n - 1 && arr[j] > arr[j + 1])
        {
            j++;
        }

        int length = j - i + 1;

        if(length > maxLength)
        {
            maxLength = length;
        }
    }

    return maxLength;
}

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = longestBitonicSubarray(arr, n);

    printf("Length of the longest bitonic subarray: %d\n", result);

    return 0;
}