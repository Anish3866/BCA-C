#include <stdio.h>

void array(int *arr, int size)
{
	int i;
    for(i = 0; i < size; i++)
	{
        printf("Element %d = %d\n", i, arr[i]);
    }
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50};

    array(nums, 5);

    return 0;
}

