#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[], int size, int capacity, int index)
{
    if (index >= capacity)
    {
        printf("Array Deletion in unsuccessful!\n");
        // return 0;
    }
    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf("Array Insertion in Successful!\n");
        // return 1;
    }
}

int main()
{
    int arr[100] = {1, 5, 9, 13, 75};
    int size = 5, index;
    printf("Enter your index element to be deleted: \n");
    scanf("%d", &index);
    indDeletion(arr, size, 100, index);
    size -= 1;
    display(arr, size);
    return 0;
}