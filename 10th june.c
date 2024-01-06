#include <stdio.h>

void rearrangeArray(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        if (arr[left] < 0)
        {
            left++;
        }
        else if (arr[right] >= 0)
        {
            right--;
        }
        else
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {-3, 3, -2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
