/*Topic:-selection sort
Author-Rudreswar_Pal*/
#include <stdio.h>
int main(void)
{
    int n, min_index;
    printf("enter no of element\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("before sorting elements are :\n");
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    // selection sorting code assending
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
                min_index = j;
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
        // for (int i = 0; i < n; i++)
        //     printf("%d  ",arr[i]);
        //     printf("\n");
    }

    printf("after sorting elements are :\n");
    for (int i = 0; i < n; i++)
        printf("%d  ",arr[i]);
    return 0;
}