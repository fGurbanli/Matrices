#include <stdio.h>

int GetIntInput();
void ProcessMatrix(int row, int column);


int main(void)
{
    printf("Enter a valid value for row count: ");
    int row = GetIntInput();
    printf("Enter a valid value for column count: ");
    int column = GetIntInput();
    ProcessMatrix(row, column);

    return 0;
}

int GetIntInput()
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1 && input > 0)
        {
            break;
        }
        printf("Enter a valid value!\n");
        while (getchar() != '\n');
    }
    return input;
}

void ProcessMatrix(int row, int column)
{
    int matrix [row] [column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Give value for [%d] [%d]: ", i, j );
            matrix [i] [j] = GetIntInput();
        }
    }
    printf("Here is your matrix!\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", matrix [i] [j]);
        }
        printf("\n");
    }

}