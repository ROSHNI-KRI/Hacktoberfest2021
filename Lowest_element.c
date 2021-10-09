#include <stdio.h>
#include <conio.h>
void input(int *ptr);
void display(int *ptr);
void mini(int *ptr);
int main()
{
    int x[3][4];
    input(x[0]);
    display(x[0]);
    mini(x[0]);
    return 0;
}
void input(int *ptr)
{
    int i, j;
    printf("Enter the elements in the 2-d array");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", (ptr + i * 4 + j));
        }
    }
}
void display(int *ptr)
{
    int i, j;
    printf("The required array elements are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", *(ptr + i * 4 + j));
        }
        printf("\n");
    }
}
void mini(int *ptr)
{
    int i, j, min = *ptr;
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i++)
        {
            if (min > *(ptr + i * 4 + j))
            {
                min = *(ptr + i * 4 + j);
            }
        }
    }
    printf("\nThe lowest element in the given array is: %d", min);
}
