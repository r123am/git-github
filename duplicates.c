#include<stdio.h>
#include<stdlib.h>
 
// function to find repeating elements
void printRepeating( int arr[], int n)
{
    int i;
    // First check all the values that are
    // present in an array then go to that
    // values as indexes and increment by
    // the size of array
    for (i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        printf("inde[%d] = [%d]\n", i, index);
        arr[index] += n;
        printf("arr[index] = [%d]\n",arr[index]);
    }
 
    // Now check which value exists more
    // than once by dividing with the size
    // of array
    for (i = 0; i < n; i++)
    {
        if ((arr[i]/n) > 1)
            printf("%d ",i);
    }
    printf("\n");
}
 
// Driver's code
int main()
{
    int arr[] = {1, 6, 3, 1, 3, 8, 6, 6, 8,6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int j = 0;
    printf("The repeating elements are: \n");
    printRepeating( arr, arr_size);
    for(j=0; j<10;j++)
       printf("arr[%d] = [%d]\n",j,arr[j]);
    return 0;
}
