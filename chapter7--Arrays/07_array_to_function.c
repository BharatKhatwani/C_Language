#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of  element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of  element %d is %d\n", i + 1, (ptr[i]));
    }
    ptr[2] = 5555;  // this value will lbe change in arr array of main as well
}      

int main()
{
    int arr[] = {1, 2, 3456, 6789};    //array size bhi pass krta ha because limited size me limited value deta ha ;
    printArray(arr, 7);
    printf("%d" ,arr[2]);
    return 0;
}
