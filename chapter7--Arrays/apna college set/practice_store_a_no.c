#include <stdio.h> //   Q..   create a 2d array, storing the table of 2 and 3

void storeTable(int arr[][10], int n, int m, int number);

int main()
{
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }

    return 0;
}
void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    { // 0 to 10

        arr[n][i] = number * (i + 1); // 2,4 ,6,8,10............
                                      // arr[0][0] arr [1][2]
    }
}
